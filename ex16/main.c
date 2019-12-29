#pragma warning(disable : 4996) //необходимо для использования устаревших функций
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//C:\Users\User\source\repos\Project1\Debug\Project1.exe C : \Users\User\source\repos\Project1\ffile.txt, .

int main(int argc, const char* argv[]) // обЪявляем аргументы командной строки
{
    setlocale(LC_ALL, "Rus"); // русский язык

    for (int i = 0; i < argc; i++) // выводим все входные данные
    {
        printf("%d. %s\n", i, argv[i]);
    }

    printf("\n\n\n\n");
    if (argc < 2) // если в командной строке не было адреса файла (он второй, тк первый это адресс самой программы), то
    {
        printf("Введите первый аргументом адрес файла, а последующими разделители между словами в формате \"разделитель\"\n");
        return 0; // завершаем
    }

    printf("Разделители\n");

    for (int i = 0; i < (argc - 2); i++)
    {
        printf("%s", argv[i + 2]);
    }

    printf("\n");

    FILE* txt = fopen(argv[1], "r"); // открываем текстовый файл

    if (txt == NULL) // если его не было, то
    {
        printf("Ошибка открытия файла, возможно не введен адрес или введен не верно\n");
        return 0; // завершаем
    }

    char sim; // текущий символ
    int cnt = 0; // счетчик слов
    int separ = 0; // флаг разделителя, изначально ноль, чтобы нумеровать первое слово

    do
    {
        if (separ == 0) // если резделитель был найден, то
        {
            printf("№%i ", cnt); // выводим номера слова
            separ = 1; // опускаем флаг
        }

        sim = getc(txt); // получаем новый символ
        for (int i = 0; i < (argc - 2); i++) // сверяем его с разделителями
        {
            (sim == argv[i + 2][0]) ? (separ = 0) : (separ = 1); // совпало 0, не совпало 1
            if (separ == 0) // если совпало, дальше не проверяем
            {
                break;
            }
        }

        if (separ != 0 && sim != '\n' && sim != ' ' && sim != EOF) // если это не разделитель, то выводим текущий символ
        {
            printf("%c", sim);
        }

        if (separ == 0) // если текущий символ разделитель...
        {
            printf("\n");
            cnt++; // увеличиваем число слов
        }
    } while ((sim) != EOF); 

    printf("\n");
    return 0;
}
