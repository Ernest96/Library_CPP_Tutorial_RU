#include "biblioteca.h"

void sort_menu()
{
    char op;

    system("cls");

    do
    {
        cout << "1 - ���������� �� ISBN" << endl;
        cout << "2 - ���������� �� ��������" << endl;
        cout << "3 - ���������� �� ������" << endl;
        cout << "4 - ���������� �� ���� ����������" << endl;
        cout << "0 - �����" << endl;

        op = getch();

        switch(op)
        {
            case '1':
                sort_isbn();
                return;
                break;
            case '2':
                sort_title();
                return;
                break;
            case '3':
                sort_author();
                return;
                break;
        }

        system("cls");

    } while(op != '0');
}

void sort_isbn()
{
    int i, j;
    Book aux;

    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if (strcmp(books[j].isbn, books[j + 1].isbn) > 0)
            {
                aux = books[j];
                books[j] = books[j + 1];
                books[j + 1] = aux;
            }
        }
    }

    write_books();
    cout << "C��������� ������ ������� !" << endl;
    system("pause");
}

void sort_title()
{
    int i, j;
    Book aux;

    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if (strcmp(books[j].title, books[j + 1].title) > 0)
            {
                aux = books[j];
                books[j] = books[j + 1];
                books[j + 1] = aux;
            }
        }
    }

    write_books();
    cout << "C��������� ������ ������� !" << endl;
    system("pause");
}

void sort_author()
{
    int i, j;
    Book aux;

    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if (strcmp(books[j].author, books[j + 1].author) > 0)
            {
                aux = books[j];
                books[j] = books[j + 1];
                books[j + 1] = aux;
            }
        }
    }

    write_books();
    cout << "C��������� ������ ������� !" << endl;
    system("pause");
}
