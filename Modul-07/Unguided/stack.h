#ifndef STACK_H
#define STACK_H

#define MAX 20

typedef int infotype;

struct Stack
{
    infotype info[MAX];
    int top;
};

void CreateStack(Stack &S);
void Push(Stack &S, infotype x);
infotype Pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);
void pushAscending(Stack &S, infotype x);
void getInputStream(Stack &S);

#endif
