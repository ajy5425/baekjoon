#include <stdio.h>

int main(void)
{
	int i, N, v, n[100], a=0;

	scanf("%d", &N);
	for (i=0;i<N;i++)
	{
		scanf("%d", &n[i]);
	}
	scanf("%d", &v);
	for (i = 0; i < N; i++)
	{
		if (n[i] == v)
			a++;
	}
	printf("%d", a);
}