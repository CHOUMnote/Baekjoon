#include <bits/stdc++.h>
using namespace std;

int n;
int count = 0;
void fib1(int a)
{
    if (a == 1 or a == 2)
    {
        ::count++;
        return;
    }
    fib1(a - 1);
    fib1(a - 2);
}

void fib2(int a)
{
    if (a < 3)
        return;
    for (int i = 3; i <= a; i++)
    {
        ::count++;
    }
}

int main()
{
    cin >> n;

    fib1(n);
    cout << ::count << ' ';
    ::count = 0;
    fib2(n);
    cout << ::count << endl;
}
