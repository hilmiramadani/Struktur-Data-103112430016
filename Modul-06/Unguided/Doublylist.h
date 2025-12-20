#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <iostream>
#include <string>
using namespace std;

#define Nil NULL

// infotype kendaraan
struct kendaraan
{
    string nopol;
    string warna;
    int thnBuat;
};

typedef struct ElmList *address;

// elemen list
struct ElmList
{
    kendaraan info;
    address next;
    address prev;
};

// list
struct List
{
    address First;
    address Last;
};

// prototype ADT
void CreateList(List &L);
address alokasi(kendaraan x);
address findElm(List L, string nopol);
void dealokasi(address &P);
void insertLast(List &L, address P);
void printInfo(List L);

void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(address Prec, address &P);

#endif
