#include <stdio.h>

int main()
{
    int N, M, i, j, temp = 0;
    int basket[100];
    scanf("%d %d", &N, &M);

    // 바구니에 1~N까지 넣기
    for (int a = 0; a < N; a++)
    {
        basket[a] = a + 1;
    }

    // M번 만큼 바구니 위치 바꾸기
    for (int a = 0; a < M; a++)
    {
        scanf("%d %d", &i, &j);
        i--; j--;

        // 구간 [i,j]를 역순으로 만들기
        while (i < j)
        {
            int temp = basket[i];
            basket[i] = basket[j];
            basket[j] = temp;
            i++;
            j--;
        }
    }

    for (int a = 0; a < N; a++) {
        printf("%d ", basket[a]);
    } // 바구니 출력
    return 0;
}