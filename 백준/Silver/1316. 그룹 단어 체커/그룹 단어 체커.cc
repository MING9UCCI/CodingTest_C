#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    int group = 0;
    int len = 0;
    char str[101];

    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%s", str);
        len = strlen(str);
        int check[26] = {0,};
        int isGroup = 1;
        
        for (int j = 0; j < len; j++) {
            if(check[str[j] - 'a'] == 0) {
                check[str[j] - 'a'] = 1;
            }
            else if (str[j] != str[j-1]) {
                isGroup = 0;
                break;
            }
        }
        if(isGroup) {
            group++;
        }
    }
    printf("%d", group);

    return 0;
}