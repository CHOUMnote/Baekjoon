#include <bits/stdc++.h>
using namespace std;

void run(vector<vector<int>> &arr);
void print();
void end();
vector<vector<int>> arr;
int n, m;
int MAX = 10000000;
vector<vector<int>> check;

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
        check.emplace_back(vector<int>(n,-1));
    }
    for (int i = 0; i < n; i++){
        arr[i][i] = 0;
        check[i][i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a = a - 1;
        b = b - 1;

        if (arr[a][b] > c)
        {
            arr[a][b] = c;
            check[a][b] = b + 1;
        }
    }
    run(arr);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 10000000)
                cout << 0 << ' ';
            else
                cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    end();
}

void run(vector<vector<int>> &arr)
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] > arr[i][k] + arr[k][j])
                {
                    arr[i][j] = arr[i][k] + arr[k][j];
                    
                    check[i][j] = check[i][k];
                    check[k][j] = check[k][j];
                }
            }
        }
    }
}

void print()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << check[i][j] << ' ';
        }
        cout << '\n';
    }
}

void end(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(check[i][j]==0 or check[i][j]==-1)
                cout << 0 << '\n';
            else{
                int count = 1;
                int t = check[i][j];
                vector<int> x;
                while(t){
                    count+=1;
                    x.emplace_back(t);
                    t = check[t-1][j];
                }
                cout << count << ' ' << i+1 << ' ';
                for(int num : x)
                    cout << num << ' ';
                cout << '\n';
            }
        }
    }
}