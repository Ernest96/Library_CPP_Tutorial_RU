#include "biblioteca.h"

Book books[100];
int n;

int main()
{
    int op;

    setlocale(LC_ALL, "Russian");

    cout << "����� ���������� !" << endl << endl;
    read_books();

    do
    {
        cout << endl;
        cout << "���-�� ����: " << n << endl << endl;

        cout << "1 - �������� �����" << endl;
        cout << "2 - ����� ���� ����" << endl;
        cout << "3 - ����� �����" << endl;
        cout << "4 - �������� �����" << endl;
        cout << "5 - ������� �����" << endl;
        cout << "6 - ���������� ����" << endl;
        cout << "7 - ������� �����" << endl;
        //cout << "8 - �������� �����" << endl;
        cout << "0 - �����" << endl;
        cout << endl;

        op = getch();

        switch(op)
        {
            case '1':
                add_book();
                break;
            case '2':
                print_all_books();
                break;
            case '3':
                search_menu();
                break;
            case '4':
                reserve_menu();
                break;
            case '5':
                free_menu();
                break;
            case '6':
                sort_menu();
                break;
            case '7':
                delete_menu();
                break;
        }

        system("cls");

    }while(op != '0');

}
