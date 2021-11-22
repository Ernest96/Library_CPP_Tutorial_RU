#include "biblioteca.h"

void reserve_menu()
{
    char op;

    system("cls");

    do
    {
        cout << "1 - ���������� �� ISBN" << endl;
        cout << "2 - ���������� �� �������" << endl;
        cout << "0 - �����" << endl;

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
        cout << "����� ��� ��������������� !" << endl;
    }
    else
    {
        books[i].reserved = true;
        write_books();
        cout << "����� ��������������� �������." << endl;
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


