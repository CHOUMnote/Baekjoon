#include <bits/stdc++.h>

using namespace std;

int n, m;
int c;

void run();
void go();
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> c;

    while (c--)
        run();
}

void run()
{
    priority_queue<int> heap;
    queue<pair<int, bool>> q;
    int count = 1;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (i != m)
        {
            heap.push(t);
            q.push(make_pair(t, false));
        }
        else
        {
            heap.push(t);
            q.push(make_pair(t, true));
        }
    }

    pair<int, bool> x;
    while (1)
    {
        x = q.front();
        q.pop();
        if (x.second and heap.top()==x.first){
            break;
        }

        if (x.first < heap.top())
            q.push(x);
        else
        {
            heap.pop();
            count++;
        }
    }

    cout << count << '\n';
}

void go(priority_queue<int>& heap, queue<pair<int, bool>>& q){

}