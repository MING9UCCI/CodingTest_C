#include <stdio.h>
#include <string.h>

int main()
{
    int sum = 0, sec = 0;
    char alpha[100];
    scanf("%15s", alpha);
    
    // strlen()을 매번 호출하지 않도록 길이 저장
    int len = strlen(alpha);
    for(int i = 0; i < len; i++) {
        int sec = ((int)alpha[i] - 56) / 3;
        if (alpha[i] == 'S' || alpha[i] == 'V' || alpha[i] == 'Y' || alpha[i] == 'Z') {
            sec--;
        }
        sum += sec;
    }
    printf("%d", sum);

    return 0;
}