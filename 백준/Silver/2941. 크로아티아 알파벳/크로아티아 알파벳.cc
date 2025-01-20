#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int sum = 0, i;
    int len;

    scanf("%100s", str);
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        switch(str[i]) {
            case 'c':
                if (str[i + 1] == '=' || str[i + 1] == '-') {
                    i++;
                }
                sum++;
                break;
                
            case 'd':
                if (str[i + 1] == '-') {
                    i++;
                    sum++;
                }
                else if (str[i + 1] == 'z' && str[i + 2] == '=') {
                    i += 2;
                    sum++;
                }
                else {
                    sum++;
                }
                break;
                
            case 'l':
                if (str[i + 1] == 'j') {
                    i++;
                }
                sum++;
                break;
                
            case 'n':
                if (str[i + 1] == 'j') {
                    i++;
                }
                sum++;
                break;
                
            case 's':
                if (str[i + 1] == '=') {
                    i++;
                }
                sum++;
                break;
                
            case 'z':
                if (str[i + 1] == '=') {
                    i++;
                }
                sum++;
                break;
                
            default:
                sum++;
        }
    }

    printf("%d", sum);
    return 0;
}