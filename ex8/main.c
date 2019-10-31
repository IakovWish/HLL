#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
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

	int m = 0;

	FILE* fpout; // указатели на структуру типа FILE для выходного файла

	
	fpout = fopen("C:\\Users\\User\\source\\repos\\result.txt", "wt"); // открыть файл для записи

	if (fpout == NULL)
	{
		printf("error opening file output\n"); // информация об ошибке
		return; // ошибка при открытии файла
	}

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

	do
	{
		while (*in_ptr != m)
		{
			*out_ptr = *in_ptr;
			fprintf (fpout, "%d", *out_ptr++);
			m++;
		}
		fprintf (fpout, "\n");
		m = 0;
	} while (++in_ptr - first_ptr != K);

	printf("\nK = %d", K);

	fclose(fpout); // закрыть выходной файл

	return 0;
}
