#include <stdio.h>
#include <string.h>

int main()
{
    char String[101];
    int sum = 0;
    scanf("%100s", String);
    int len = strlen(String);
    for (int i = 0; i < len; i++) {
        if (String[i] == String[len-i-1]) {
            sum++;
        }
    }
    if (sum == len) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}