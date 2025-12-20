#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <string>
using namespace std;

struct Lagu
{
    string judul;
    string penyanyi;
    float durasi;
    Lagu *next;
};

struct Playlist
{
    Lagu *first;
};

void createPlaylist(Playlist &P);
Lagu *buatLagu(string j, string p, float d);
void tambahAwal(Playlist &P, Lagu *L);
void tambahAkhir(Playlist &P, Lagu *L);
void tambahSetelahKe3(Playlist &P, Lagu *L);
void hapusJudul(Playlist &P, string j);
void tampilkan(Playlist P);

#endif
