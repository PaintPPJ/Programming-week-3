#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int o, i, j, z;
	scanf("%d", &o);
	if (o >= 3) {
		for (i = 1; i <= o; i++)
		{
			for (z = i; z < o; z++) {
				printf(" ");
			}
			for (j = 1; j <= (2 * o - 1); j++)
			{
				if (i == o || j == 1 || j == 2 * i - 1) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	else
	{
		printf("It can't create hollow triangle");
	}
	return 0;
}