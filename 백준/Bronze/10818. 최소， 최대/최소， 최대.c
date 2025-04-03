#include <stdio.h>

int i, N, A[1000000], min, max;

int main(void)
{
	

	scanf("%d", &N);
	for (i=0;i<N;i++)
	{
		scanf("%d", &A[i]);
	}
	min = A[0];
	max = A[0];
	for (i = 0; i < N; i++)
	{
		if (min > A[i])
			min = A[i];
		if (max < A[i])
			max = A[i];
	}
	printf("%d %d", min, max);
}