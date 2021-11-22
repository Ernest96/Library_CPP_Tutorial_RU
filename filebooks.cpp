#include "biblioteca.h"

void write_books()
{
    cout << endl;
    cout << "������ ���� � ����..." << endl;

    ofstream output("books.data", ios::binary);

    output.write((char*)&n, sizeof(n));

    for (int i = 0; i < n; i++)
    {
        output.write((char*)&books[i], sizeof(Book));
    }

    cout << "������ ���������" << endl;
}

void read_books()
{

    ifstream input("books.data", ios::binary);

    if (input.fail())
    {
        cout << "���� � ������� �� ������..." << endl;
        cout << "�� ����� ������ ����� ������ ������." << endl;
    }
    else
    {
        cout << "������ �� �����..." << endl;

        input.read((char*)&n, sizeof(n));

        for (int i = 0; i < n; i++)
        {
            input.read((char*)&books[i], sizeof(Book));
        }

        cout << "������ ���������." << endl;
    }
}

