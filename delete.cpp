#include "biblioteca.h"

#include "biblioteca.h"

void delete_menu()
{
    char op;

    system("cls");

    do
    {
        cout << "1 - Удаление по ISBN" << endl;
        cout << "2 - Удаление по инедксу" << endl;
        cout << "0 - Назад" << endl;

        op = getch();

        switch(op)
        {
            case '1':
                delete_isbn();
                break;
            case '2':
                delete_index();
                break;
        }

        system("cls");

    } while(op != '0');
}

void delete_book(int i)
{
    int j;

    for (j = i; j < n - 1; j++)
    {
        books[j] = books[j + 1];
    }

    n--;

    write_books();
    cout << "Книгу удалали успешно." << endl;
}

void delete_isbn()
{
    int i;

    i = get_isbn();

    if (i >= 0)
    {
        delete_book(i);
    }

    system("pause");
}

void delete_index()
{
    int i;

    i = get_index();

    if (i >= 0)
    {
        delete_book(i);
    }

    system("pause");
}
