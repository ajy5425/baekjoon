#include <stdio.h>

int main(void)
{
	int i, n, A, B;
	scanf("%d", &n);

	for (i = 0; i<n; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A+B);
	}
}