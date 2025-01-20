#include <stdio.h>

int main(void)
{
    char sub[51];
    char grade[2];
    double score = 0.0, ans = 0.0, sumScore = 0.0, major = 0.0;

    for (int i = 0; i < 20; i++)
    {
        scanf("%s %lf %s", sub, &score, grade);

        if (grade[0] == 'P')
        {
            continue;
        }

        switch (grade[0])
        {
        case 'A':
            major = 4.0;
            break;
        case 'B':
            major = 3.0;
            break;
        case 'C':
            major = 2.0;
            break;
        case 'D':
            major = 1.0;
            break;
        case 'F':
            major = 0.0;
            break;
        }

        if (grade[1] == '+')
        {
            major += 0.5;
        }

        if (grade[0] != 'F')
        {
            ans += score * major;
        }
        sumScore += score;
    }

    printf("%.6lf", ans / sumScore);

    return 0;
}
