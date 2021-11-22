#include "biblioteca.h"

void reserve_menu()
{
    char op;

    system("cls");

    do
    {
        cout << "1 - Резервация по ISBN" << endl;
        cout << "2 - Резервация по инедксу" << endl;
        cout << "0 - Назад" << endl;

        op = getch();

        switch(op)
        {
            case '1':
                reserve_isbn();
                break;
            case '2':
                reserve_index();
                break;
        }

        system("cls");

    } while(op != '0');
}

void reserve_book(int i)
{
    if (books[i].reserved == true)
    {
        cout << "Книга уже зарезервирована !" << endl;
    }
    else
    {
        books[i].reserved = true;
        write_books();
        cout << "Книга зарезервирована успешно." << endl;
    }
}

void reserve_isbn()
{
    int i;

    i = get_isbn();

    if (i >= 0)
    {
        reserve_book(i);
    }

    system("pause");
}

void reserve_index()
{
    int i;

    i = get_index();

    if (i >= 0)
    {
        reserve_book(i);
    }

    system("pause");
}


