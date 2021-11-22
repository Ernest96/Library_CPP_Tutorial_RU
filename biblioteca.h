#pragma once

#include <iostream>
#include <cstring>
#include <fstream>
#include <locale>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <ctime>

using namespace std;

void read_books();
void write_books();
void init();
void add_book();
void print_book(int i);
void print_all_books();
void find_book();
void search_menu();
void search_isbn();
void search_title();
void reserve_menu();
void reserve_isbn();
void reserve_index();
void reserve_book(int i);

void free_menu();
void free_isbn();
void free_index();
void free_book(int i);

int get_index();
int get_isbn();

void sort_menu();
void sort_isbn();
void sort_title();
void sort_author();

void delete_menu();
void delete_isbn();
void delete_index();
void delete_book(int i);

typedef struct Book{
    int pages;
    char author[61];
    char isbn[31];
    char title[61];
    bool reserved;
} Book;


extern Book books[100];
extern int n;
