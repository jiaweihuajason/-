/*
函数的第一个案例，认真体会，什么是函数，要不以后咋学习指针
目标：创建一个在一行打印40个星号的函数，并在一个打印表头的程序中使用该函数
*/

#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plass"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void); //函数原型在这里，这是第一次声明，本程序用到了什么函数。分号表明这是在声明函数，而不是定义函数

int main(void)
{
	starbar();
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	starbar();

	getchar();
	return 0;
}

void starbar(void)
{
	int count;
	for (size_t count = 1; count <= WIDTH; count++)
	{
		putchar('*');	
	}
	putchar('\n');
}