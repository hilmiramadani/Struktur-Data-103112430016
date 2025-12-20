#include "stack.h"
#include <iostream>
using namespace std;

void CreateStack(Stack &S)
{
    S.top = -1;
}

void Push(Stack &S, infotype x)
{
    if (S.top < MAX - 1)
    {
        S.top++;
        S.info[S.top] = x;
    }
    else
    {
        cout << "Stack penuh!" << endl;
    }
}

infotype Pop(Stack &S)
{
    if (S.top >= 0)
    {
        infotype x = S.info[S.top];
        S.top--;
        return x;
    }
    else
    {
        cout << "Stack kosong!" << endl;
        return -1;
    }
}

void printInfo(Stack S)
{
    cout << "[TOP] ";
    for (int i = S.top; i >= 0; i--)
    {
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack &S)
{
    int i = 0;
    int j = S.top;
    while (i < j)
    {
        int temp = S.info[i];
        S.info[i] = S.info[j];
        S.info[j] = temp;
        i++;
        j--;
    }
}

void pushAscending(Stack &S, infotype x)
{
    if (S.top == MAX - 1)
    {
        cout << "Stack penuh!" << endl;
        return;
    }

    int i = S.top;

    while (i >= 0 && S.info[i] > x)
    {
        S.info[i + 1] = S.info[i];
        i--;
    }

    S.info[i + 1] = x;
    S.top++;
}

void getInputStream(Stack &S)
{
    char ch;
    cout << "Masukkan data: ";
    while ((ch = cin.get()) != '\n')
    {
        if (ch >= '0' && ch <= '9')
        {
            Push(S, ch - '0');
        }
    }
}
