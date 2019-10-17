#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)

#include <stdio.h>

#define N 10

int main(void)
{
	/*ИНИЦИАЛИЗАЦИЯ И НАЧАЛЬНЫЕ ПРИСВАИВАНИЯ*/

	float A[N];
	float B[N];
	float C[N];
	
	float* Au = A;
	float* Bu = B;
	float* Cu = C;

	float* Auk = A;
	float* Buk = B;
	float* Cuk = C;

	/*ВВОД МАССИВОВ*/

	srand(time(NULL));

	for (; Au - Auk < N; Au++)
	{
		*Au = 0 + rand() % 100;
		*Au = *Au / (1 + rand() % 10);
	}

	for (; Bu - Buk < N; Bu++)
	{
		*Bu = (0 + rand() % 100);
		*Bu = *Bu / (1 + rand() % 10);
	}

	/*ЗАПОЛНЕНИЕ МАССИВА C*/

	for (Au = A, Bu = B; Cu - Cuk < N; Au++, Bu++, Cu++)
	{
		*Cu = (*Au + *Bu) / 2;
	}

	/*ВЫВОД МАССИВОВ*/

	printf("A = ");
	for (Au = A; Au - Auk < N; Au++)
	{
		printf("%6.2f ", *Au);
	}
	printf("\n");

	printf("B = ");
	for (Bu = B; Bu - Buk < N; Bu++)
	{
		printf("%6.2f ", *Bu);
	}
	printf("\n");

	printf("C = ");
	for (Cu = C; Cu - Cuk < N; Cu++)
	{
		printf("%6.2f ", *Cu);
	}

	return 0;
}
