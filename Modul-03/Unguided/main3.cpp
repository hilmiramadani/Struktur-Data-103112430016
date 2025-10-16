#include <iostream>
#include "unguided3.h"
#include "unguided3.cpp"
using namespace std;

int main()
{
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

    cout << "Array A sebelum ditukar:\n";
    tampilArray(A);
    cout << "Array B sebelum ditukar:\n";
    tampilArray(B);

    tukarArray(A, B, 1, 1);

    cout << "\nArray A setelah ditukar pada [1][1]:\n";
    tampilArray(A);
    cout << "Array B setelah ditukar pada [1][1]:\n";
    tampilArray(B);

    int x = 10, y = 20;
    int *ptr1 = &x;
    int *ptr2 = &y;

    cout << "\nSebelum tukar pointer:\n";
    cout << "x = " << x << ", y = " << y << endl;

    tukarPointer(ptr1, ptr2);

    cout << "Setelah tukar pointer:\n";
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
