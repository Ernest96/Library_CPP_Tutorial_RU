#include "biblioteca.h"

void free_menu()
{
    char op;

    system("cls");

    do
    {
        cout << "1 - ������� �� ISBN" << endl;
        cout << "2 - ������� �� �������" << endl;
        cout << "0 - �����" << endl;

        op = getch();

        switch(op)
        {
            case '1':
                free_isbn();
                break;
            case '2':
                free_index();
                break;
        }

        system("cls");

    } while(op != '0');
}

void free_book(int i)
{
    if (books[i].reserved == false)
    {
        cout << "����� c������� !" << endl;
    }
    else
    {
        books[i].reserved = false;
        write_books();
        cout << "������� ������ �������." << endl;
    }
}

void free_isbn()
{
    int i;

    i = get_isbn();

    if (i >= 0)
    {
        free_book(i);
    }

    system("pause");
}

void free_index()
{
    int i;

    i = get_index();

    if (i >= 0)
    {
        free_book(i);
    }

    system("pause");
}



