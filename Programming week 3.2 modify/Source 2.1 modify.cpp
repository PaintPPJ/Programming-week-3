#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j, k, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		k = n - 1;
		for (j = 0; j < 2 * n - 1; j++)
		{
			if (j >= k - i && j <= k + i) {
				printf("%d", i + 1);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}