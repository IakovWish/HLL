#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
#include <stdio.h>

/*определение символических констант*/
#define YES 1
#define NO 0
#define MAXLINE 1024  // максимальная длина массива

int main(void)
{
	char* in_ptr;
	char* out_ptr;


	FILE* fpin = fopen("C:\\Users\\User\\source\\repos\\file.txt", "rt"); // открыть входной файл для чтения
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




	return 0;
}
