#include <iostream>
#include <string>
#include "unguided2.h"
#include "unguided2.cpp"

using namespace std;

int main()
{
    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);

    return 0;
}
