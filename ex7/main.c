#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
#include <stdio.h>

/* определение символических констант*/
#define YES 1
#define NO 0
#define MAXLINE 1024

int main(void)
{
	char line[MAXLINE];
	char result[MAXLINE];

	char* first_ptr = line;
	char* in_ptr = line;
	char* out_ptr = result;

	char* w1 = line;
	char* w2 = line;

	int number = NO;
	int negative = NO;

	char c;

	int cnt = 1;

	printf("Please, enter some numbers\n");
	gets(line);

	do
	{
		c = *in_ptr;
		if (c == ' ' || c == '\0')
		{
			if (negative == NO)
			{
				while (first_ptr < in_ptr)
				{
					*out_ptr++ = *first_ptr++;
				}
			}
			else
			{
				*out_ptr++ = '0';
			}
			*out_ptr++ = *in_ptr;
			number = NO;
			negative = NO;
		}

		else
		{
			if (number == NO)
			{
				first_ptr = in_ptr;

				if (*first_ptr == '-')
				{
					negative = YES;
				}
			}
			number = YES;
		}
		in_ptr++;
	} while (c != '\0');

	in_ptr = line;
	out_ptr = result;

	while (*out_ptr != '\0')
	{
		*in_ptr++ = *out_ptr++;
	}
	*in_ptr = '\0';

	in_ptr = line;
	out_ptr = result;

	do
	{
		c = *in_ptr;
		if (c == ' ' || c == '\0')
		{
			if (cnt %2 == 1)
			{
				in_ptr++;
				if (c == ' ' || c == '\0')
				{
					cnt++;
					if (cnt % 2 == 0)
					{
						while (first_ptr < in_ptr)
						{
							*out_ptr++ = *first_ptr++;
						}
					}
				}
				else
				{
					if (number == NO)
					{
						first_ptr = in_ptr;
					}
					if (cnt % 2 == 0)
					{
						w2 = first_ptr;
					}
					number = YES;
				}
			}
			else
			{
				
			}
			*out_ptr++ = *in_ptr;
			number = NO;
			cnt++;
		}

		else
		{
			if (number == NO)
			{
				first_ptr = in_ptr;
			}
			if (cnt % 2 == 1)
			{
				w1 = first_ptr;
			}
			number = YES;
		}
		in_ptr++;
	} while (c != '\0');


	printf("Result:\n");
	puts(result);

	return 0;
}
