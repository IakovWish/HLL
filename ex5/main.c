#include <stdio.h>

#define MAXLINE 1024

int main(void)
{
	char line[MAXLINE];
	char result[MAXLINE];

	char* in_ptr = line;
	char* out_ptr = result;

	gets(line);

	while (*in_ptr != '\0')
	{
		if (*in_ptr == 'p')
		{}
		else
		{
			*out_ptr++ = *in_ptr;
		}

		in_ptr++;
	}

	*out_ptr = '\0';

	puts(result);

	return 0;
}
