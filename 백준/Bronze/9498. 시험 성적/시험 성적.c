#include <stdio.h>

int main(void)
{
	int A;
	scanf("%d", &A);
	if ((A/10) >= 9)
		printf("A");
	else if ((A / 10) >= 8)
		printf("B");
	else if ((A / 10) >= 7)
		printf("C");
	else if ((A / 10) >= 6)
		printf("D");
	else
		printf("F");
}