#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<vector<int>> arr(9);
    int max = -1;
    tuple<int,int> pair{-1,-1};

    for (int i = 0; i < 9; i++)
    {
        vector<int> t(9, 0);
        for (int j = 0; j < 9; j++)
        {
            int a = 0;
            cin >> a;
            t[j] = a;
            if(a > max){
                max = a;
                get<0>(pair) = i+1;
                get<1>(pair) = j+1;
            }
        }
        arr[i] = t;
    }

    cout << max << '\n' << get<0>(pair) << ' ' << get<1>(pair) << '\n';
}