#include <bits/stdc++.h>
using namespace std;

static int n;
static int m;
static bool visited[8]{
    0,
};
static int arr[8]{
    0,
};

void dfs(int count)
{
    if (count == m)
    {
        for (int i = 0; i < m; i++){
            cout << arr[i] << ' ';
            visited[arr[i]] = true;
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i < n+1; i++)
    {
        if (!visited[i]){
            arr[count] = i;
            dfs(count+1);
            for(int j=0;j<8 ;j++)
                visited[j] = false;
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