#include <stdio.h>

int main() {
	int N, j, v, sum = 0;
	int a[100];
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &j);
		a[i] = j;
	}
	scanf("%d", &v);
	
	for(int m = 1; m <= N; m++) {
		int K = a[m];
		if (K == v) {
			sum++;
		}
	}
	
	printf("%d", sum);
}