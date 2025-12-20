#include <iostream>
#include "Playlist.h"
#include "Playlist.cpp"
using namespace std;

int main()
{
    Playlist P;
    createPlaylist(P);

    tambahAkhir(P, buatLagu("Laskar Pelangi", "Nidji", 4.2));
    tambahAkhir(P, buatLagu("Separuh Aku", "Noah", 4.5));
    tambahAkhir(P, buatLagu("Ruang Rindu", "Letto", 4.1));

    cout << "Playlist awal:" << endl;
    tampilkan(P);

    tambahAwal(P, buatLagu("Akad", "Payung Teduh", 4.3));
    tambahSetelahKe3(P, buatLagu("Fix You", "Coldplay", 4.6));
    hapusJudul(P, "Separuh Aku");

    cout << "\nPlaylist akhir:" << endl;
    tampilkan(P);

    return 0;
}
