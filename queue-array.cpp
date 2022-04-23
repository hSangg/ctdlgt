#include <bits/stdc++.h>
using namespace std;

int const MAX = 100;

struct Queue
{
    int a[MAX];
    int Front;
    int Rear;
};

void createQueue(Queue &q)
{
    q.Front = q.Rear = -1;
}

bool isEmpty(Queue q)
{
    return q.Front == -1 && q.Rear == -1;
}

void deQueue(Queue &q, int &x)
{
    cout << "FRONT: " << q.Front << "\n";
    if (!isEmpty(q))
    {
        x = q.a[q.Front];
        q.Front++;
        if (q.Front > q.Rear)
        {
            q.Front = q.Rear = -1;
        }
    }
    else
        cout << "RONG";
}

void enQueue(Queue &q, int x)
{
    int i, f, r;
    if (q.Rear - q.Front + 1 == MAX)
        return;

    if (isEmpty(q))
        q.Front = 0;

    if (q.Rear == MAX - 1)
    {
        f = q.Front;
        r = q.Rear;
        for (i = f; i < r; i++)
            q.a[i - f] = q.a[i];

        q.Front = 0;
        q.Rear = r - f;
    }

    q.Rear++;
    q.a[q.Rear] = x;
}

int main()
{
    Queue q;
    createQueue(q);
    enQueue(q, 1);
    enQueue(q, 2);
    enQueue(q, 3);
    enQueue(q, 4);

    for (int i = 0; i < 4; i++)
    {
        cout << q.a[i] << " | ";
    }

    int value, value_1;
    deQueue(q, value);
    deQueue(q, value_1);

    cout << value << " | " << value_1 << " | ";
}