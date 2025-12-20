#include "Playlist.h"
#include <iostream>
using namespace std;

void createPlaylist(Playlist &P)
{
    P.first = NULL;
}

Lagu *buatLagu(string j, string p, float d)
{
    Lagu *L = new Lagu;
    L->judul = j;
    L->penyanyi = p;
    L->durasi = d;
    L->next = NULL;
    return L;
}

void tambahAwal(Playlist &P, Lagu *L)
{
    L->next = P.first;
    P.first = L;
}

void tambahAkhir(Playlist &P, Lagu *L)
{
    if (P.first == NULL)
    {
        P.first = L;
    }
    else
    {
        Lagu *Q = P.first;
        while (Q->next != NULL)
            Q = Q->next;
        Q->next = L;
    }
}

void tambahSetelahKe3(Playlist &P, Lagu *L)
{
    Lagu *Q = P.first;
    int i = 1;
    while (Q != NULL && i < 3)
    {
        Q = Q->next;
        i++;
    }
    if (Q != NULL)
    {
        L->next = Q->next;
        Q->next = L;
    }
}

void hapusJudul(Playlist &P, string j)
{
    Lagu *Q = P.first;
    Lagu *prev = NULL;

    while (Q != NULL && Q->judul != j)
    {
        prev = Q;
        Q = Q->next;
    }

    if (Q != NULL)
    {
        if (prev == NULL)
            P.first = Q->next;
        else
            prev->next = Q->next;
        delete Q;
    }
}

void tampilkan(Playlist P)
{
    Lagu *Q = P.first;
    int no = 1;
    while (Q != NULL)
    {
        cout << no++ << ". " << Q->judul
             << " - " << Q->penyanyi
             << " (" << Q->durasi << " menit)" << endl;
        Q = Q->next;
    }
}
