#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("Enter a ");
	scanf ("%d", &a);
	printf("Enter b ");
	scanf ("%d", &b);
	a > b ? printf("a > b") : a < b ? printf("a < b") : printf("a = b");
	return 0;
}
