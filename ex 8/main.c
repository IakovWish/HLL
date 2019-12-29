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
	char tekst[MAXLINE];


	char* tek_ptr = tekst;
	int* first_ptr = line;
	int* in_ptr = line;
	int* out_ptr = result;
	int* output_ptr = result;

	int symb_cnt;
	int number = 0;

	FILE* fpin = fopen ("C:\\Users\\User\\source\\repos\\file.txt", "rt"); // открыть файл для чтения
	FILE* fpout = fopen ("C:\\Users\\User\\source\\repos\\result.txt", "wt"); // открыть файл для записи

	if (fpin == NULL)
	{
		printf("error opening file input\n"); // информация об ошибке
		return; // ошибка при открытии файла
	}

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
		printf("%2d ", *in_ptr);
	}

	printf("\noriginal data with zero:\n");
	for (number = 1, out_ptr = result; out_ptr - output_ptr != K; out_ptr++, number++)
	{
		printf("%3d: %3d\n", number, *out_ptr);
	}

	number = 0;

	for (in_ptr = line, out_ptr = result; in_ptr - first_ptr != K;)
	{
		*in_ptr++ = *out_ptr++;
	}

	in_ptr = line;
	out_ptr = result;

	//fprintf(fpout, "     12345678901234567890\n"); // линейка

	while (!feof(fpin))// цикл до конца файла
	{
		tek_ptr = fgets (tekst, MAXLINE, fpin); // получакм новую строку и ставим на нее указатель

		if (tek_ptr == NULL || number == K)
		{
			break; // файл исчерпан
		}

		number++;

		fprintf(fpout, "%3d: ", number);
		symb_cnt = 0;
		while (*in_ptr != symb_cnt)
		{
			if (*tek_ptr == '\n' || *tek_ptr == '\0')
			{
				break;
			}
			fprintf(fpout, "%c", *tek_ptr++);
			symb_cnt++;
		}
		fprintf(fpout, "\n");
		in_ptr++;
	}

	fclose(fpin); // закрыть входной файл
	fclose(fpout); // закрыть выходной файл

	return 0;
}
