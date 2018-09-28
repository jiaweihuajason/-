/*
题目：
        设计一个函数chline(ch,i,j)，打印制定的字符j行i列。在一个简单的驱动程序中测试该函数
*/

#include <stdio.h>

void chline(char *ch, int i, int j)
{
	int m = 0;
	int n = 0;
	int tmp = 0;
	while ((*(ch + tmp)) != '\0')
	{

		if (m == i - 1)
		{
			break;
		}
		if ('\n' == (*(ch + tmp)))
		{
			m++;
		}
		tmp++;
	}

	for (n = 0; n < j; n++)
	{
		if (n == j - 1)
		{
			putchar(ch[tmp]);
		}
		tmp++;
	}
}
void p9_2(void)
{
	int i = 0;
	int j = 0;
	char ch = 0;
	char *words = "hello world!\n This is the bulteaful world!\n Learn to program in c language!\n c language is a nice language!";

	printf("Please enter the row:");
	scanf_s("%d", &i);
	getchar();

	printf("Please enter the column:");
	scanf_s("%d", &j);
	getchar();

	printf("The character of %d row %d column is ", i, j);
	chline(words, i, j);

	printf("\n");

	return;
}
