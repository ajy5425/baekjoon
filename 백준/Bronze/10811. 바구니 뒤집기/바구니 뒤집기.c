#include <stdio.h>

int main(void)
{
	int a, b, i, j, A[100], B[100], M, N;

	scanf("%d %d", &N, &M);
	for (a = 1; a <= N; a++)
	{
		A[a] = a;
	}
	for (a = 0; a < M; a++)
	{
		scanf("%d %d", &i, &j);
		for (b = i; b <= j; b++)
		{
			B[b] = A[j + i - b];
		}
		for (b = i; b <= j; b++)
		{
			A[b] = B[b];
		}
	}
	for (a = 1; a <= N; a++)
	{
		printf("%d ", A[a]);
	}
}