#include <bits/stdc++.h>
using namespace std;

void run(vector<vector<int>> &arr);

vector<vector<int>> arr;
int n, m;
int MAX = 10000000;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        vector<int> t(n, MAX);
        arr.emplace_back(t);
    }
    for (int i = 0; i < n; i++)
        arr[i][i] = 0;

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a = a - 1;
        b = b - 1;

        if (arr[a][b] > c)
            arr[a][b] = c;
    }

    run(arr);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j] == 10000000)
                cout << 0 << ' ';
            else
                cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

void run(vector<vector<int>> &arr)
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(arr[i][j] > arr[i][k]+arr[k][j])
                    arr[i][j] = arr[i][k]+arr[k][j];
            }
        }
    }
}