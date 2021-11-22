#include "biblioteca.h"

Book books[100];
int n;

int main()
{
    int op;

    setlocale(LC_ALL, "Russian");

    cout << "Добро пожаловать !" << endl << endl;
    read_books();

    do
    {
        cout << endl;
        cout << "Кол-во книг: " << n << endl << endl;

        cout << "1 - Добавить книгу" << endl;
        cout << "2 - Вывод всех книг" << endl;
        cout << "3 - Поиск книги" << endl;
        cout << "4 - Одолжить книгу" << endl;
        cout << "5 - Вернуть книгу" << endl;
        cout << "6 - Сортировка книг" << endl;
        cout << "7 - Удалить книгу" << endl;
        //cout << "8 - Изменить книгу" << endl;
        cout << "0 - Выход" << endl;
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
