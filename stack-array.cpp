#include <bits/stdc++.h>
using namespace std;

int const MAX = 1000;

struct Stack
{
    int a[MAX];
    int t;
};

void createStack(Stack &s)
{
    s.t = -1;
}

bool isEmpty(Stack s)
{
    return s.t == -1;
}

bool isFull(Stack s)
{
    return s.t >= MAX;
}

void push(Stack &s, int x)
{
    if (!isFull(s))
    {
        s.t++;
        s.a[s.t] = x;
    }
} // Thêm một phần tử vào Stack

void pop(Stack &s, int &x)
{
    if (!isFull(s))
    {
        x = s.a[s.t];
        s.t--;
        }
} // Lấy mốt phần tử từ Stack

int main()
{
    Stack s;
    createStack(s);
    int getValue;
    push(s, 5);
    push(s, 8);
    push(s, 9);
    push(s, 9);
    push(s, 10);
    cout << "cac gia tri trong stack: \n";

    for (int i = 0; i < s.t; i++)
    {
        cout << s.a[i] << " \t";
    }

    cout << "\nlay gia tri trong stack: ";

    pop(s, getValue);

    for (int i = 0; i < s.t; i++)
    {
        cout << getValue;
    }
}