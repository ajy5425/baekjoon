#include <stdio.h>

int main(void)
{
	int a, A[100], i, j, N, M, b;
	scanf("%d %d", &N, &M);
	for (a = 1; a <= N; a++)
	{
		A[a] = a;
	}
	for (a = 0; a < M; a++)
	{
		scanf("%d %d", &i, &j);
		b = A[i] ;
		A[i] = A[j];
		A[j] = b;
	}
	for (a = 1; a <= N; a++)
	{
		printf("%d ", A[a]);
	}
}