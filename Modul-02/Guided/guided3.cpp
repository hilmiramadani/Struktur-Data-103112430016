#include <iostream>
using namespace std;

// mendeklarasikan prototype fungsi
int maks3(int a, int b, int c);

int main()
{
    int x, y, z;
    cout << "masukkan nilai bilangan ke-1 =";
    cin >> x;
    cout << "masukkan nilai bilangan ke-2 =";
    cin >> y;
    cout << "masukkan nilai bilangan ke-3 =";
    cin >> z;

    cout << "nilai maksimumnya adalah = " << maks3(x, y, z) << endl;
    return 0;
}

int maks3(int a, int b, int c)
{
    int temp_max = a;
    if (b > temp_max)
        temp_max = b;
    if (c > temp_max)
        temp_max = c;
    return temp_max;
}

/* void tulis(int x);
int main()
{
    int jum;
    cout << "jumlah baris kata = ";
    cin >> jum;
    tulis(jum);
    return 0;
}

void tulis(int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << "baris ke-" << i + 1 << endl;
    }
}*/
