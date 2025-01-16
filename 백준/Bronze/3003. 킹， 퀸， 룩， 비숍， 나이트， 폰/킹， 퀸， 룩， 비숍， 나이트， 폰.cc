#include <stdio.h>

int main() {
    int input[10];
    int chess[10] = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; i++) {
        scanf("%d", &input[i]);
    }
    for (int i = 0; i < 6; i++) {
        printf("%d ", chess[i] - input[i]);
    }
    return 0;
}