#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
};

int main()
{
    Mahasiswa mhs;
    // mhs.nama = "Hilmi";
    // mhs.nim = "103112430016";

    cout << "Masukkan nama: ";
    getline(cin, mhs.nama);
    cout << "Masukkan NIM: ";
    getline(cin, mhs.nim);

    cout << "Nama : " << mhs.nama << endl
         << "NIM : " << mhs.nim;

    return 0;
}