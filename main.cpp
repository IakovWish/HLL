#include <iostream>

using namespace std;

class Book
{
    private:
    /*объекты класса*/
    string author;
    string title;
    string publishing;
    int year;
    int count_of_page;

    public:
    /*методы класса*/
    void set()
    {
        cout << "Введите  Автора" << endl;
        cin >> author;
        cout << "Введите Название" << endl;
        cin >> title;
        cout << "Введите Издательство" << endl;
        cin >> publishing;
        cout << "Введите год" << endl;
        cin >> year;
        cout << "Введите количество страниц" << endl;
        cin >> count_of_page;
    }

    void show()
    {
        cout << "Автор: " << author << endl;
        cout << "Название: " << title << endl;
        cout << "Издательство: " << publishing << endl;
        cout << "год: " << year << endl;
        cout << "количество страниц: " << count_of_page << endl;
    }

    /*для вызова каждого метода отдельно*/
    string get_author()
    {
        return author;
    }
    string get_publishing()
    {
        return publishing;
    }
    int get_year()
    {
        return year;
    }
};

int main(void)
{
    setlocale(LC_ALL, "Russian");

    int menu_1 = 0;
    int cnt = 0;

    class Book** Library; // объект
    
    Library = new Book*;
    while (menu_1 != 2)
    {
        cout << "Меню:\n1:Ввести еще одну книгу\n2:Перейти в меню поиска" << endl;
        cin >> menu_1;

        switch (menu_1)
        {
        case 1:
            Library[0] = new Book[cnt + 1];
            for (int i = 0; i < cnt; i++)
            {
                Library[0][i] = Library[1][i];
            }
            Library[1] = new Book[cnt + 1];

            Library[0][cnt].set();
            for (int i = 0; i < cnt + 1; i++)
            {
                Library[1][i] = Library[0][i];
            }

            cnt++;
            break;
        }
    }
 
    int menu_2 = 0;

    while (menu_2 != 5)
    {
        string zad_name;
        string zad_izdat;
        int zad_year;

        cout << "Меню:\n1:Поиск книг, заданного автора\n2:Поиск книг, выпущенных заданным издательством\n3:Поиск книг, выпущенных после заданного года\n5:выход " << endl;
        cin >> menu_2;

        switch (menu_2) 
        {
        case 1:
            cout << "Поиск книг, заданного автора\n" << "Введите автора" << endl;
            cin >> zad_name;

            for (int j = 0; j < cnt; j++)
            {
                if (zad_name == Library[0][j].get_author())
                {
                    Library[0][j].show();
                    cout << endl;
                }
            }
            break;

        case 2:
            cout << "Поиск книг, заданного издательства\n" << "Введите издательство" << endl;
            cin >> zad_izdat;

            for (int j = 0; j < cnt; j++)
            {
                if (zad_izdat == Library[0][j].get_publishing())
                {
                    Library[0][j].show();
                    cout << endl;
                }
            }
            break;

        case 3:
            cout << "Поиск книг выпущенных после заданного года\n" << "Введите необходимый год" << endl;
            cin >> zad_year;

            for (int j = 0; j < cnt; j++)
            {
                if (Library[0][j].get_year() > zad_year)
                {
                    Library[0][j].show();
                    cout << endl;
                }
            }
            break;
        }
    }
    return 0;
}
