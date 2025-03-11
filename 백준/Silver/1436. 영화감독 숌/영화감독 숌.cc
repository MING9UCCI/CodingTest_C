#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    int cnt = 0;
    int number = 666;
    scanf("%d", &N);
    while (cnt < N)
    {
        char str[20];
        sprintf(str, "%d", number);

        if (strstr(str, "666") != NULL)
        {
            cnt++;
        }
        number += 1;
    }
    printf("%d", number - 1);
    return 0;
}
