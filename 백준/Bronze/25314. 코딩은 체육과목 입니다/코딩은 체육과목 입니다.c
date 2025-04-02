#include <stdio.h>

int main(void)
{
	int i, N;
	scanf("%d", &N);
	N = N / 4;
	for (i = 0; i < N; i++)
	{
		printf("long ");
	}
	printf("int");
}