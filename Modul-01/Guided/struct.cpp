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
    mhs.nama = "Hilmi";
    mhs.nim = "103112430016";

    cout << "Nama : " << mhs.nama << endl;
    cout << "NIM : " << mhs.nim << endl;

    return 0;
}