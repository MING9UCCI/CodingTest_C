#include <stdio.h>

int main()
{
    int x, y;
    int sum = 0;
    int day_of_week;
    int month[13] = {
        31, 28, 31, 30,
        31, 30, 31, 31,
        30, 31, 30, 31};
    char *result[] = {
        "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    scanf("%d %d", &x, &y);

    for (int i = 0; i < x - 1; i++)
    {
        sum += month[i];
    };
    sum += y;
    day_of_week = sum % 7;
    printf("%s", result[day_of_week]);

    return 0;
}
