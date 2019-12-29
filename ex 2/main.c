#include <stdio.h>

#define MAXLINE 1024

int main(void)
{
	char str1[MAXLINE];
	char str2[MAXLINE];

	int i = 0;

	printf("Enter str1\n");
	gets(str1);
	printf("Enter str2\n");
	gets(str2);

	do
	{
		i++;
	} while (str1[i] != '\0' && str2[i] != '\0');

	if (str1[i] == '\0' && str2[i] == '\0')
	{
		printf("str1 = str2");
	}
	else if (str2[i] == '\0')
	{
		printf("str1 > str2");
	}
	else if (str1[i] == '\0')
	{
		printf("str1 < str2");
	}

	return 0;
}
