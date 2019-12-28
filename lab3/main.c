#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;
void google();
void photos();
void docs();
void spread();
void pres();
void draw();
void form();
void drive();
void trans();
void acc();
void support();
void shop();
void dwnl();
int menu_2 = 0;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int menu = 0;
    do
    {
        cout << "Введите цыфру соответствующую необходимому пункту меню:" << endl << " 1 - Рандомная ссылка" << endl << "2 - Ручной выбор" << endl;
        cin >> menu;
        switch (menu) {
        case 2:
        {
            cout << "Введите цыфру соответствующую необходимому пункту меню:" << endl
                 << " 0 - Основная страница google;" << endl 
                 << "Неходимо выбрать сервис, страницу, которого хотим открыть:" << endl 
                 << " 1 - google photos"  << endl 
                 << " 2 - google docs;" << endl 
                 << " 3 - google spreadsheets;" << endl 
                 << " 4 - google presentation;" << endl 
                 << " 5 - google drawings;" << endl 
                 << " 6 - google forms;" << endl 
                 << " 7 - google drive;" << endl 
                 << " 8 - google translate;" << endl 
                 << " 9 - google account;" << endl;
            cin >> menu;
            break;
        }
        case 1:
        {
            cout << "Выбор рандомной ссылки" << endl;
            menu = -1 + rand() % 10;
            break;
        }

        default:
            break;
        }

        switch (menu)
        {
        case 0:
        {
            cout << "Сайт сервиса был окрыт" << endl;
            google();
            break;
        }
        case 1:
        {
            cout << "Сайт сервиса был окрыт" << endl;
            photos();
            break;
        }
        case 2:
        {
            cout << "Сайт сервиса был окрыт" << endl;
            docs();
            break;
        }
        case 3:
        {
            cout << "Сайт сервиса был окрыт" << endl;
            spread();
            break;
        }
        case 4:
        {
            cout << "Сайт сервиса был окрыт" << endl;
            pres();
            break;
        }
        case 5:
        {
            cout << "Сайт сервиса был окрыт" << endl;
            draw();
            break;
        }
        case 6:
        {
            cout << "Сайт сервиса был окрыт" << endl;
            form();
            break;
        }
        case 7:
        {
            cout << "Сайт сервиса был окрыт" << endl;
            drive();
            break;
        }
        case 8:
        {
            cout << "Сайт сервиса был окрыт" << endl;
            trans();
            break;
        }
        case 9:
        {
            cout << "Сайт сервиса был окрыт" << endl;
            acc();
            break;
        }
        default:
            break;
        }
    } while (menu != -1);
    return 0;
}

void google()
{
    system("start https://www.google.ru/");
}

void photos()
{
    system("start https://photos.go0ogle.com/?hl=ru");

    do
    {
        cout << "Введите цыфру соответствующую необходимому пункту меню:" << endl 
             << " 0 - Основная страница google;" << endl 
             << "Неходимо выбрать страницу, которую хотим открыть:" << endl 
             << " 1 - Страница сервиса, которую выбрали раньше" << endl 
             << " 2 - Центр поддержки google;" << endl 
             << " 3 - Магазин приложений;" << endl 
             << " 4 - Установка google chrom" << endl;
        cin >> menu_2;
        switch (menu_2) {
        case 0:
        {
            google();
            break;
        }
        case 1:
        {
            photos();
            break;
        }
        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }

        default:
            break;
        }
    } while (menu_2 != 0);
}

void docs()
{
    system("start https://docs.go0ogle.com/document/u/0/");

    do
    {
        cout << "Введите цыфру соответствующую необходимому пункту меню:" << endl
            << " 0 - Основная страница google;" << endl
            << "Неходимо выбрать страницу, которую хотим открыть:" << endl
            << " 1 - Страница сервиса, которую выбрали раньше" << endl
            << " 2 - Центр поддержки google;" << endl
            << " 3 - Магазин приложений;" << endl
            << " 4 - Установка google chrom" << endl; 
        cin >> menu_2;
        switch (menu_2) {
        case 0:
        {
            google();
            break;
        }
        case 1:
        {
            docs();
            break;
        }

        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }

        default:
            break;
        }
    } while (menu_2 != 0);
}

void spread()
{
    system("start https://docs.google.com/spreadsheets/u/0/");

    do
    {
        cout << "Введите цыфру соответствующую необходимому пункту меню:" << endl
            << " 0 - Основная страница google;" << endl
            << "Неходимо выбрать страницу, которую хотим открыть:" << endl
            << " 1 - Страница сервиса, которую выбрали раньше" << endl
            << " 2 - Центр поддержки google;" << endl
            << " 3 - Магазин приложений;" << endl
            << " 4 - Установка google chrom" << endl; 
        cin >> menu_2;
        switch (menu_2) {
        case 0:
        {
            google();
            break;
        }
        case 1:
        {
            docs();
            break;
        }

        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }

        default:
            break;
        }
    } while (menu_2 != 0);
}

void pres()
{
    system("start https://docs.google.com/presentation/u/0/");

    do
    {
        cout << "Введите цыфру соответствующую необходимому пункту меню:" << endl
            << " 0 - Основная страница google;" << endl
            << "Неходимо выбрать страницу, которую хотим открыть:" << endl
            << " 1 - Страница сервиса, которую выбрали раньше" << endl
            << " 2 - Центр поддержки google;" << endl
            << " 3 - Магазин приложений;" << endl
            << " 4 - Установка google chrom" << endl; 
        cin >> menu_2;
        switch (menu_2)
        {
        case 0:
        {
            google();
            break;
        }
        case 1:
        {
            pres();
            break;
        }

        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }

        default:
            break;
        }
    } while (menu_2 != 0);
}

void draw()
{
    system("start https://docs.google.com/drawings/d/1rVskrA0AdrGO3J4dSxRJ0RE4Z49Ezj9eia8N-kroJ1s/edit");

    do
    {
        cout << "Введите цыфру соответствующую необходимому пункту меню:" << endl
            << " 0 - Основная страница google;" << endl
            << "Неходимо выбрать страницу, которую хотим открыть:" << endl
            << " 1 - Страница сервиса, которую выбрали раньше" << endl
            << " 2 - Центр поддержки google;" << endl
            << " 3 - Магазин приложений;" << endl
            << " 4 - Установка google chrom" << endl; 
        cin >> menu_2;
        switch (menu_2) {
        case 0:
        {
            google();
            break;
        }
        case 1:
        {
            draw();
            break;
        }

        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }

        default:
            break;
        }
    } while (menu_2 != 0);
}

void form()
{
    system("start https://docs.google.com/forms/u/0/");

    do
    {
        cout << "Введите цыфру соответствующую необходимому пункту меню:" << endl
            << " 0 - Основная страница google;" << endl
            << "Неходимо выбрать страницу, которую хотим открыть:" << endl
            << " 1 - Страница сервиса, которую выбрали раньше" << endl
            << " 2 - Центр поддержки google;" << endl
            << " 3 - Магазин приложений;" << endl
            << " 4 - Установка google chrom" << endl; 
        cin >> menu_2;
        switch (menu_2) {
        case 0:
        {
            google();
            break;
        }
        case 1:
        {
            form();
            break;
        }

        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }

        default:
            break;
        }
    } while (menu_2 != 0);
}

void drive()
{
    system("start https://drive.google.com/drive/my-drive?ths=true");

    do
    {
        cout << "Введите цыфру соответствующую необходимому пункту меню:" << endl
            << " 0 - Основная страница google;" << endl
            << "Неходимо выбрать страницу, которую хотим открыть:" << endl
            << " 1 - Страница сервиса, которую выбрали раньше" << endl
            << " 2 - Центр поддержки google;" << endl
            << " 3 - Магазин приложений;" << endl
            << " 4 - Установка google chrom" << endl; 
        cin >> menu_2;
        switch (menu_2) {
        case 0:
        {
            google();
            break;
        }
        case 1:
        {
            drive();
            break;
        }

        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }

        default:
            break;
        }
    } while (menu_2 != 0);
}

void trans()
{
    system("start https://translate.google.com/?hl=ru#view=home&op=translate&sl=en&tl=ru");

    do
    {
        cout << "Введите цыфру соответствующую необходимому пункту меню:" << endl
            << " 0 - Основная страница google;" << endl
            << "Неходимо выбрать страницу, которую хотим открыть:" << endl
            << " 1 - Страница сервиса, которую выбрали раньше" << endl
            << " 2 - Центр поддержки google;" << endl
            << " 3 - Магазин приложений;" << endl
            << " 4 - Установка google chrom" << endl; 
        cin >> menu_2;
        switch (menu_2) {
        case 0:
        {
            google();
            break;
        }
        case 1:
        {
            trans();
            break;
        }

        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }

        default:
            break;
        }
    } while (menu_2 != 0);
}

void acc()
{
    system("start https://myaccount.google.com/");

    do
    {
        cout << "Введите цыфру соответствующую необходимому пункту меню:" << endl
            << " 0 - Основная страница google;" << endl
            << "Неходимо выбрать страницу, которую хотим открыть:" << endl
            << " 1 - Страница сервиса, которую выбрали раньше" << endl
            << " 2 - Центр поддержки google;" << endl
            << " 3 - Магазин приложений;" << endl
            << " 4 - Установка google chrom" << endl; 
        cin >> menu_2;
        switch (menu_2) {
        case 0:
        {
            google();
            break;
        }
        case 1:
        {
            acc();
            break;
        }

        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }

        default:
            break;
        }
    } while (menu_2 != 0);
}

void support()
{
    system("start https://support.google.com/?hl=ru");
}

void shop()
{
    system("start https://play.google.com/store");
}

void dwnl()
{
    cout << "загрузка chrom" << endl;
    system("start https://www.google.com/intl/ru/chrome/");
}
