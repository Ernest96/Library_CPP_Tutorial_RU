#include "biblioteca.h"

void search_menu()
{
    char op;

    system("cls");

    do
    {
        cout << "1 - Поиск по ISBN" << endl;
        cout << "2 - Поиск по названию" << endl;
        cout << "0 - Назад" << endl;

        op = getch();

        switch(op)
        {
            case '1':
                search_isbn();
                break;
            case '2':
                search_title();
                break;
        }

        system("cls");

    } while(op != '0');
}

void search_title()
{
    int i;
    char title[61];

    cout << endl;
    cout << "Введите название: ";

    fflush(stdin);
    cin.getline(title, 60);

    for (i = 0; i < n; i++)
    {
        if (strstr(books[i].title, title))
        {
            print_book(i);
        }
    }

    cout << endl;
    system("pause");
}

void search_isbn()
{
    int i;
    char isbn[61];

    cout << endl;
    cout << "Введите ISBN: ";

    fflush(stdin);
    cin.getline(isbn, 60);

    for (i = 0; i < n; i++)
    {
        if (strstr(books[i].isbn, isbn))
        {
            print_book(i);
        }
    }

    cout << endl;
    system("pause");
}

int get_isbn()
{
    int i;
    char isbn[61];

    cout << endl;
    cout << "Введите ISBN: ";

    fflush(stdin);
    cin.getline(isbn, 60);

    for (i = 0; i < n; i++)
    {
        if (strcmp(books[i].isbn, isbn) == 0)
        {
            return i;
        }
    }

    cout << "Книга не найдена" << endl;
    return -1;
}

int get_index()
{
    int i;

    cout << endl;

    cout << "Введите индекс: ";
    cin >> i;

    i--;
    if (i >= 0 && i < n)
    {
        return i;
    }

    cout << "Книга не найдена" << endl;
    return -1;
}

