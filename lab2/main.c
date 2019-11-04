#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
#include <stdio.h>

/*определение символических констант*/
#define YES 1
#define NO 0
#define MAXLINE 1024  // максимальная длина массива

int main(void)
{
	/*объявление и инициализация*/
	char line[MAXLINE]; // текущая строка
	char result[MAXLINE]; // результирующая строка
	int word = NO; // признак слова
	int cnt = 0; // счетчик
	int number = 1;
	char* in_ptr = line; // указатель на текущий символ входной строки
	char* out_ptr = result; // указатель на текущий символ выходной строки
	char* word_ptr = line; // указатель на начало слова
	char* output_ptr = result; // указатель на результирующий массив

	FILE* fpin = fopen("C:\\Users\\User\\source\\repos\\file.txt", "rt"); // открыть файл для чтения
	FILE* fpout = fopen("C:\\Users\\User\\source\\repos\\result.txt", "wt"); // открыть файл для записи

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

	while (!feof(fpin))// цикл до конца файла
	{
		cnt = 0;
		in_ptr = fgets(line, MAXLINE, fpin); // получаем новую строку и ставим на нее указатель
		fprintf(fpout, "%2d: ", number);

		if (in_ptr == NULL)
		{
			break; // файл исчерпан
		}

		do
		{
			if (*in_ptr == '\0' || *in_ptr == ' ' || *in_ptr == '\n') // разделитель найден
			{
				while (word_ptr < in_ptr && word == YES)
				{
					*out_ptr++ = *word_ptr++; // копирование слова
				}

				if (*in_ptr != '\0')
				{
					*out_ptr++ = *in_ptr;
				}
				word = NO;
			}
			else
			{
				if (word == NO) // найдена первая буква слова
				{
					word_ptr = in_ptr; // запомнить адрес начала слова
					cnt++;
				}
				word = YES;
			}
		} while (*in_ptr++ != '\0');

		printf("%2d: %d\n", number++, cnt);

		while (output_ptr != out_ptr)
		{
			fprintf(fpout, "%c", *output_ptr++);
		}
	}

	fclose(fpin); // закрыть входной файл
	fclose(fpout); // закрыть выходной файл

	return 0;
}
