#include <bits/stdc++.h>
using namespace std;

static int n;
static int m;
static bool visited[9]{
    0,
};
static int arr[9]{
    0,
};

void dfs(int count)
{
    if (count == m)
    {
        for (int i = 0; i < m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i < n+1; i++)
    {
        if (!visited[i]){
            if(count>0 and arr[count-1]>i) continue;

            arr[count] = i;
            dfs(count+1);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    
    dfs(0);
}