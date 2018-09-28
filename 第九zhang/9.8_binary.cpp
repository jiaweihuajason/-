/*
    以二进制的形式打印数字
	关键是怎么转化为二进制的形式呢？！
*/
#include <stdio.h>

void to_binary(unsigned long n);

int main(void)
{
	unsigned long number;

	printf("Enter an integer (q to quit):\n");
	while (scanf_s("%lu",&number) == 1)
	{
		printf("Binary equivalent:");
		to_binary(number);
		putchar('\n');
		printf("Enter an integer (q to quit):\n");
	}
	printf("Done.\n");

	getchar();
	return 0;
}

void to_binary(unsigned long n)
{
	int r = 0;
	r = n % 2;
	if (n >= 2)
	{
		to_binary(n / 2);
	}
	putchar(r == 0 ? '0' : '1');
	return;
}