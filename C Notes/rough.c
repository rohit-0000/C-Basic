#include <stdio.h>

int main(void)
{
	// your code goes here
	int T;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		int A, B, A1, A2, B1, B2;
		scanf("%d  %d  %d  %d", &A, &B, &A1, &B1, &A2, &B2);
		if ((A == A1 && B == B1) || (A == B1 && B == A1))
		{
			printf("1");
		}
		else if ((A == A2 && B == B2) || (A == B2 && B == A2))
		{
			printf("2");
		}
		// else
		// {
		// 	printf("0");
		// }

		printf("\n");
	}
	return 0;
}