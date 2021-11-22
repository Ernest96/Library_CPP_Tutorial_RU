#include "biblioteca.h"

void add_book()
{
    Book book;

    system("cls");
    cout << "���� ������ ��� �����." << endl << endl;

    cout << "ISBN: ";
    cin >> book.isbn;

    cout << "�������� �����: ";
    fflush(stdin);
    cin.getline(book.title, 60);

    cout << "A����: ";
    fflush(stdin);
    cin.getline(book.author, 60);

    cout << "���-�� �������: ";
    fflush(stdin);
    cin >> book.pages;

    book.reserved = false;

    books[n] = book;
    n++;

    cout << "����� ���������." << endl;

    write_books();

    system("pause");
}


void print_book(int i)
{
    Book book = books[i];

    cout << endl;
    cout << "#" << i + 1 << endl;

    cout << "ISBN: ";
    cout << book.isbn << endl;

    cout << "�������� �����: ";
    cout << book.title << endl;

    cout << "A����: ";
    cout << book.author << endl;

    cout << "���-�� �������: ";
    cout << book.pages << endl;

    cout << "� �������: ";
    if (book.reserved)
        cout << "���";
    else
        cout << "��";

    cout << endl;
}

void print_all_books()
{
    system("cls");

    cout << "��� �����: " << endl;
    for (int i = 0; i < n; i++)
    {
        print_book(i);
    }

    cout << endl;
    system("pause");
}
