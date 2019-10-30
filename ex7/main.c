#include <stdio.h>

/* определение символических констант*/
#define YES 1
#define NO 0
#define MAXLINE 1024

int main(void)
{
	srand(time(NULL));
	int K = 2 + rand() % 21;

	int line[MAXLINE];
	int result[MAXLINE];

	int* first_ptr = line;
	int* in_ptr = line;
	int* out_ptr = result;
	int* output_ptr = result;

	int* w1 = line;
	int* w2 = line;

	for (; in_ptr - first_ptr != K; in_ptr++)
	{
		*in_ptr = -20 + rand() % 41;
	}

	in_ptr = line;

	do
	{
		if (*in_ptr < 0)
		{
			*out_ptr++ = 0;
		}
		else
		{
			*out_ptr++ = *in_ptr;
		}
	} while (in_ptr++ - first_ptr != K);

	printf("original data:\n");
	for (in_ptr = line; in_ptr - first_ptr != K; in_ptr++)
	{
		printf("%4d ", *in_ptr);
	}

	printf("\noriginal data with zero:\n");
	for (out_ptr = result; out_ptr - output_ptr != K; out_ptr++)
	{
		printf("%4d ", *out_ptr);
	}

	for (in_ptr = line, out_ptr = result; in_ptr - first_ptr != K;)
	{
		*in_ptr++ = *out_ptr++;
	}

	in_ptr = line;
	out_ptr = result;

	if (K % 2 == 0)
	{
		do
		{
			w1 = in_ptr++;
			w2 = in_ptr++;

			*out_ptr++ = *w2++;
			*out_ptr++ = *w1++;

		} while (in_ptr - first_ptr < K);
	}
	else
	{
		do
		{
			w1 = in_ptr++;
			w2 = in_ptr++;

			*out_ptr++ = *w2++;
			*out_ptr++ = *w1++;

		} while (in_ptr - first_ptr < K - 1);
		*out_ptr = *in_ptr;
	}

	printf("\nResult:\n");
	for (out_ptr = result; out_ptr - output_ptr != K; out_ptr++)
	{
		printf("%4d ", *out_ptr);
	}

	printf("\nK = %d", K);

	return 0;
}
