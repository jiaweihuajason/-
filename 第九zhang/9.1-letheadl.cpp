/*
�����ĵ�һ��������������ᣬʲô�Ǻ�����Ҫ���Ժ�զѧϰָ��
Ŀ�꣺����һ����һ�д�ӡ40���Ǻŵĺ���������һ����ӡ��ͷ�ĳ�����ʹ�øú���
*/

#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plass"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void); //����ԭ����������ǵ�һ���������������õ���ʲô�������ֺű������������������������Ƕ��庯��

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