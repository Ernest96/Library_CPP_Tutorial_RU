#include "biblioteca.h"

void write_books()
{
    cout << endl;
    cout << "Запись книг в файл..." << endl;

    ofstream output("books.data", ios::binary);

    output.write((char*)&n, sizeof(n));

    for (int i = 0; i < n; i++)
    {
        output.write((char*)&books[i], sizeof(Book));
    }

    cout << "Запись завершена" << endl;
}

void read_books()
{

    ifstream input("books.data", ios::binary);

    if (input.fail())
    {
        cout << "Файл с книгами не найден..." << endl;
        cout << "Он будет создан после первой записи." << endl;
    }
    else
    {
        cout << "Чтение из файла..." << endl;

        input.read((char*)&n, sizeof(n));

        for (int i = 0; i < n; i++)
        {
            input.read((char*)&books[i], sizeof(Book));
        }

        cout << "Чтение завершено." << endl;
    }
}

