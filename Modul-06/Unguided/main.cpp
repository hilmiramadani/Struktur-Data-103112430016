#include <iostream>
#include "Doublylist.h"
#include "Doublylist.cpp"
using namespace std;

int main()
{
    List L;
    CreateList(L);

    kendaraan x;
    string cek;
    int n;

    for (int i = 0; i < 3; i++)
    {
        cout << "masukkan nomor polisi: ";
        cin >> x.nopol;

        // cek duplikat
        bool ada = false;
        address P = L.First;
        while (P != Nil)
        {
            if (P->info.nopol == x.nopol)
            {
                ada = true;
                break;
            }
            P = P->next;
        }

        if (ada)
        {
            cout << "nomor polisi sudah terdaftar\n\n";
            i--;
            continue;
        }

        cout << "masukkan warna kendaraan: ";
        cin >> x.warna;
        cout << "masukkan tahun kendaraan: ";
        cin >> x.thnBuat;
        cout << endl;

        insertLast(L, alokasi(x));
    }

    string cariNopol;
    cout << "\nMasukkan nomor polisi yang dicari: ";
    cin >> cariNopol;

    address hasil = findElm(L, cariNopol);

    if (hasil != Nil)
    {
        cout << "\nData ditemukan\n";
        cout << "no polisi : " << hasil->info.nopol << endl;
        cout << "warna     : " << hasil->info.warna << endl;
        cout << "tahun     : " << hasil->info.thnBuat << endl;
    }
    else
    {
        cout << "\nData tidak ditemukan\n";
    }

    address P = findElm(L, "d003");

    if (P != Nil)
    {
        address temp;

        if (P == L.First)
        {
            deleteFirst(L, temp);
        }
        else if (P == L.Last)
        {
            deleteLast(L, temp);
        }
        else
        {
            deleteAfter(P->prev, temp);
        }

        dealokasi(temp);
        cout << "Data dengan nomor polisi d003 berhasil dihapus\n";
    }
    else
    {
        cout << "Data d003 tidak ditemukan\n";
    }

    cout << "DATA LIST 1\n";
    printInfo(L);

    return 0;
}
