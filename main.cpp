#include <iostream>

using namespace std;
class Book //описывает, то что мы можем выполнять с конкретными объектами
{
    private:

    string author;
    string title;
    string publishing;
    int year;
    int count_of_page;

    public:

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
    //несколько get чтобы, когда нам нужно вызвать одну переменную, мы не вызывали сразу все
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

int main(int argc, const char* argv[])
{
    setlocale(LC_ALL, "Russian");

    int menu_1 = 0;
    int cnt = 0;

    class Book** Work;//объект
    
    Work = new Book * [1];
    while (menu_1 != 2)
    {
        cout << "Меню:\n  1:Ввести еще одну книгу \n  2:Перейти в меню поиска" << endl;
        cin >> menu_1;

        switch (menu_1)
        {
        case 1:

            Work[0] = new Book[cnt + 1];
            for (int i = 0; i < cnt; i++)
            {
                Work[0][i] = Work[1][i];
            }
            Work[1] = new Book[cnt + 1];

            Work[0][cnt].set();
            for (int i = 0; i < cnt + 1; i++)
            {
                Work[1][i] = Work[0][i];
            }

            cnt++;
            break;
        }

    }
 
    string zad_name;
    string zad_izdat;
    int menu_2 = 0;
    int N;
    while (menu_2 != 5)
    {
        cout << "Меню:\n    1:Поиск книг, заданного автора\n    2:Поиск книг, выпущенных заданным издательством\n    3:Поиск книг, выпущенных после заданного года\n    5:выход " << endl;
        cin >> menu_2;
        int cnt_1;
        switch (menu_2) 
        {
        case 1:
            cout << "Поиск книг, заданного автора\n" << "Введите автора" << endl;
            cin >> zad_name;
            for (int j = 0; j < cnt; j++)
            {
                if (zad_name == Work[0][j].get_author())
                {
                    Work[0][j].show();
                    cout << endl;
                }
            }
            break;

        case 2:
            cout << "Поиск книг, заданного издательства\n" << "Введите издательство" << endl;
            cin >> zad_izdat;
            for (int j = 0; j < cnt; j++)
            {
                if (zad_izdat == Work[0][j].get_publishing())
                {
                    Work[0][j].show();
                    cout << endl;
                }
            }
            break;

        case 3:
            cout << "Поиск книг выпущенных после заданного года\n" << "Введите необходимый год" << endl;
            cin >> N;
            cout << "книги выпущенные после заданного года" << endl;
            for (int j = 0; j < cnt; j++)
            {
                if (Work[0][j].get_year() > N)
                {
                    Work[0][j].show();
                    cout << endl;
                }
            }
            break;
        }
    }
    cout << "конец программы" << endl;
    return 0;
}
