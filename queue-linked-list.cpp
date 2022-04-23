#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int x;
    Node *pNext;
};

struct Queue
{
    Node *pHead;
    Node *pTail;
};

bool isEmpty(Queue q)
{
    return q.pHead == NULL;
}

void createQueue(Queue &q)
{
    q.pHead = q.pTail = NULL;
}

void deQueue(Queue &q, int &b)
{
    Node *p;
    if (isEmpty(q))
        return;

    p = q.pHead;
    b = p->x;
    q.pHead = p->pNext;
    delete p;
}

void enQueue(Queue &q, Node *tam)
{
    if (isEmpty(q))
        q.pHead = q.pTail = tam;
    else
    {
        q.pTail->pNext = tam;
        q.pTail = tam;
    }
}

Node *createNode()
{
    Node *p = new Node;
    int x;
    cin >> x;

    p->x = x;
    p->pNext = NULL;
    return p;
}

int main()
{
    Queue q;
    createQueue(q);

    Node *a = createNode();
    Node *b = createNode();
    Node *c = createNode();
    Node *d = createNode();

    enQueue(q, a);
    enQueue(q, b);
    enQueue(q, c);
    enQueue(q, d);

    int p;
    deQueue(q, p);

    cout << p;
}