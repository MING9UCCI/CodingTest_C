#include <stdio.h>

int main()
{
    int n, cnt = 1;
    scanf("%d", &n);
    int space = n-1;
    for (int i = 0; i < n; i++) {
        for (int j = space; j > 0; j--) {
            printf(" ");
        }
        for (int j = 0; j < cnt; j++) {
            printf("*");
        }
        space--;
        cnt += 2;
        printf("\n");
    }
    space = 1;
    cnt -= 2;
    for (int i = 0; i < n-1; i++) {
        cnt -= 2;
        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        for (int j = cnt; j > 0; j--) {
            printf("*");
        }
        space++;
        printf("\n");
    }

    return 0;
}