#include <iostream>
#include <stack>
#include <Windows.h>
#include <stdbool.h>

using namespace std;
int processing(int size);

int main()
{
	SetConsoleCP(1251); // для русского языка
	SetConsoleOutputCP(1251); // для русского языка
	setlocale(LC_ALL, "Russian"); // для русского языка
	int size = 0;
	printf("Ввести последовательность скобок: ");
	size = processing(size); 
	printf(size > 0 ? "Последовательность не верна\n" : "Последовательность верна\n"); // если вернулось 1 - была ошибка, 0 - все хорошо
	return 0;
}

int processing(int size)
{
	char c = ' ';
	bool error = 0;
	stack <char> stk;
	for (; scanf_s("%c", &c), c != '\n' && error == 0;) // до первой ошибки или конца строки
	{
		switch (c)
		{
		case '(':
		case '[':
		case '{':
			stk.push(c); // вставляем в стек открывающуюся скобку
			size++; // увеличиваем количество скобок
			break;
		case ')':
			(stk.empty() == 0) ? (stk.top() == '(') ? size-- : error = 1 : error = 1; // проверяем есть ли еще символы, если последний символ нужный, то...
			if (error == 0)
			{
				stk.pop(); // удаление верхнего элемента
			}
			break;
		case ']':
			(stk.empty() == 0) ? (stk.top() == '[') ? size-- : error = 1 : error = 1; // проверяем есть ли еще символы, если последний символ нужный, то...
			if (error == 0)
			{
				stk.pop(); // удаление верхнего элемента
			}
			break;
		case '}':
			(stk.empty() == 0) ? (stk.top() == '{') ? size-- : error = 1 : error = 1; // проверяем есть ли еще символы, если последний символ нужный, то...
			if (error == 0)
			{
				stk.pop(); // удаление верхнего элемента
			}
		}
	}
	return size = (error != 0) ? 1 : size; // если есть ошибка, возвращаем 1, не было - 0
}
