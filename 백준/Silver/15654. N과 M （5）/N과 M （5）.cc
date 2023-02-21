#include <bits/stdc++.h>
using namespace std;

void run(int count);
int n, m;
vector<int> arr{0};
bool visited[9];
vector<int> sett{};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr.emplace_back(t);
    }
    sort(arr.begin(), arr.end());
    
    run(0);
}

void run(int count)
{
    if (count == m)
    {   
        for (int i = 0; i < m; i++)
            cout << sett[i] <<' ';
        cout << '\n';
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            sett.emplace_back(arr[i]);
            run(count + 1);
            sett.pop_back();
            visited[i] = false;
        }
    }
}