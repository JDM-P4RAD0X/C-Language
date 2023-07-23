#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>;
int main()
{
	int a,b,c;
	scanf("%d %d %d", & a, & b, & c);
	if (a >= b && b >= c)
		printf("%d %d %d", a, b, c);
	if (a >= b && c >= b)
		printf("%d %d %d", a, c, b);
	else if (b >= a && c >= a)
		printf("%d %d %d", b, c, a);
	else if (b >= c && b >= a)
		printf("%d %d %d", b, a, c);
	else if (c >= b && a >= b)
		printf("%d %d %d", c, a, b);
	else
		printf("%d %d %d", c, b, a);
	printf("\n");
	system("pause");
	return 0;
}