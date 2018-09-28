/*
题目：
         设计一个函数min(x,y)，返回两个double类型值得较小值，在一个简单的驱动程序中测试该函数
思路：
         其实就是实数比较大小
*/

#include <stdio.h>

//double min_rewrite(double x, double y)
//{
//	return (x < y ? x : y);
//}
//void main(void)
//{
//	double number1 = 0.0;
//	double number2 = 0.0;
//
//	printf("Enter the first number:");
//	scanf_s("%lf", &number1);
//	getchar();
//
//
//	printf("Enter the second number:");
//	scanf_s("%lf", &number2);
//	getchar();
//
//	printf("The min number of %lf and %lf is %lf", number1, number2, min_rewrite(number1, number2));
//
//	getchar();
//	return 0;
//}

double min(double x, double y);

int main(void)
{
	double x, y;
	printf("Please enter two double number:");
	scanf_s("%lf %lf", &x, &y);
	printf("Between %lf and %lf ,the mini one is %lf.\n", x,y,min(x, y));
	getchar();
	getchar();
	return 0;
}

double min(double x, double y)
{
	return (x < y ? x : y);
}