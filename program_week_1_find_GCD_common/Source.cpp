#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int num1, num2,temp,answer=1;
	printf("input first number : ");
	scanf("%d", &num1);
	printf("input second number : ");
	scanf("%d", &num2);
	if (num1 >= num2) { temp = num1; }
	if (num2 > num1) { temp = num2; }
	for(int i = 1;i <= temp ;i++ )
	{
		if (num1%i==0&&num2%i==0)
		{
			num1 /= i;
			num2 /= i;
			answer *= i;
			i = 1;
		}
	}
	printf("GCD of (%d,%d) is %d " ,num1, num2,answer);
}