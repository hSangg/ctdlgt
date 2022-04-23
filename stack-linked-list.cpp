#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int infor;
    Node *pNext;
};

struct Stack
{
    Node *pHead;
    Node *pTail;
};

bool isEmpty(Stack s)
{
    return s.pHead == NULL;
}

void push(Stack &s, Node *Tam)
{
    if (isEmpty(s))
    {
        s.pHead = s.pTail = Tam;
    }
    else
    {
        Tam->pNext = s.pHead;
        s.pHead = Tam;
    }
}

Node *createNode()
{
    Node *p = new Node;
    int x;
    e
            cin >>
        x;

    p->infor = x;
    p->pNext = NULL;
    return p;
}

void pop(Stack &s, int &trave)
{
    Node *p;
    if (!isEmpty(s))
    {
        p = s.pHead;
        trave = p->infor;
        s.pHead = p->pNext;
        if (s.pHead == NULL)
            s.pTail = NULL;

        delete p;
        return;
    }
}

int main()
{
    Stack s;
    Node *a = createNode();
    Node *b = createNode();
    Node *c = createNode();

    push(s, a);
    push(s, b);
    push(s, c);

    int x;
    pop(s, x);
    cout << x;
}