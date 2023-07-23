#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>;

int main()
{
	printf("为了考虑学生隐私，现打算将学生成绩单科成绩以ABCDE方式呈现\n");
	int num = 0;
	scanf("%d", &num);
	if (num >= 90 && num <= 100)
		printf("A\n");
	else if (num >= 80 && num < 90)
		printf("B\n");
	else if (num >= 70 && num < 80)
		printf("C\n");
	else if (num >= 60 && num < 70)
		printf("D\n");
	else if (num >= 0 && num < 60)
		printf("E\n");
	else
		printf("非法成绩");
	system("pause");
	return 0;
}