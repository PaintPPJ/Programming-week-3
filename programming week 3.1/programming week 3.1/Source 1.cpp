#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, t, x, y;
	scanf("%d%d%d", &a, &b, &c);
	if (b > a)
	{
		t = a;
		a = b;
		b = t; //swap a, b
	}
	if (c > a)
	{
		t = a;
		a = c;
		c = t;//swap b, c
	}
	if (a < b + c)
	{
		printf("It is a triangle.");
	}
	else
	{
		printf("It isn't a triangle.");
		return 0;
	}
	if (a * a == b * b + c * c)
	{
		printf("\nright ");
	}
	else 
	{
		if (a * a < b * b + c * c)
		{
			printf("\nacute ");
		}
		else
		{
			printf("\nabtuse ");
		}
	}
	if (a == b && b == c)
	{
		printf("and equilateral triangle.");
	}
	else
	{
		if (a == b || b == c || a == c)
		{
			printf("and isosceles triangle.");
		}
		else
		{
			printf("and scalene triangle.");
		}
	}
	return 0;
}