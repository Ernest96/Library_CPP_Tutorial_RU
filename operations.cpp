#include "biblioteca.h"

void add_book()
{
    Book book;

    system("cls");
    cout << "Ввод данных для книги." << endl << endl;

    cout << "ISBN: ";
    cin >> book.isbn;

    cout << "Название книги: ";
    fflush(stdin);
    cin.getline(book.title, 60);

    cout << "Aвтор: ";
    fflush(stdin);
    cin.getline(book.author, 60);

    cout << "Кол-во страниц: ";
    fflush(stdin);
    cin >> book.pages;

    book.reserved = false;

    books[n] = book;
    n++;

    cout << "Книга добавлена." << endl;

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

    cout << "Название книги: ";
    cout << book.title << endl;

    cout << "Aвтор: ";
    cout << book.author << endl;

    cout << "Кол-во страниц: ";
    cout << book.pages << endl;

    cout << "В наличие: ";
    if (book.reserved)
        cout << "Нет";
    else
        cout << "Да";

    cout << endl;
}

void print_all_books()
{
    system("cls");

    cout << "Все книги: " << endl;
    for (int i = 0; i < n; i++)
    {
        print_book(i);
    }

    cout << endl;
    system("pause");
}
