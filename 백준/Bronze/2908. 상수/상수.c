#include <stdio.h>

int main()
{
	char A[5], B[5];
	int i;

	scanf("%s", A);
	scanf("%s", B);
	
	
	if (A[2] > B[2])
		for (i = 2; i >= 0; i--)
		{
			printf("%c", A[i]);
		}
	else if ((A[2] == B[2]) && (A[1] > B[1]))
		for (i = 2; i >= 0; i--)
		{
			printf("%c", A[i]);
		}
	else if ((A[2] == B[2]) && (A[1] == B[1]) && (A[0] > B[0]))
		for (i = 2; i >= 0; i--)
		{
			printf("%c", A[i]);
		}
	else
		for (i = 2; i >= 0; i--)
		{
			printf("%c", B[i]);
		}
}