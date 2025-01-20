//조금 더 정돈 된 별 찍기
// 상단과 하단을 나눠서 두 단계로 처리

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    // 상단 삼각형 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1-i; j++) printf(" ");
        for (int j = 0; j < 2*i+1; j++) printf("*");
        printf("\n");
    }
    
    // 하단 삼각형 출력 
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) printf(" ");
        for (int j = 0; j < 2*(n-i)-1; j++) printf("*");
        printf("\n");
    }

    return 0;
}