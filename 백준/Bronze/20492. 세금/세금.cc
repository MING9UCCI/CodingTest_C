#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); //10000000
    int temp = N / 100; //100000
    int result1 = N - (temp * 22); //7800000
    int temp2 = N - (temp * 20);
    temp = (temp*20) / 100;
    int result2 = temp2 + (temp*78);
    
    printf("%d %d\n", result1, result2);
    return 0;
}