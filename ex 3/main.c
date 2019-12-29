#include <stdio.h>

#define YES 1
#define NO 0

#define MAXLINE 1024

int main(void)
{
	char str1[MAXLINE];
	char str2[MAXLINE];

	int i = 0;

	int flag = NO;

	printf("Enter str1\n");
	gets(str1);
	printf("Enter str2\n");
	gets(str2);

	do
	{
		if (str1[i] != str2[i])
		{
			flag = YES;
			break;
		}
		i++;
	} while (str1[i] != '\0' && str2[i] != '\0');

	if (flag == NO && str1[i] == '\0' && str2[i] == '\0')
	{
		printf("str1 = str2");
	}
	else
	{
		printf("str1 <> str2");
	}

	return 0;
}
