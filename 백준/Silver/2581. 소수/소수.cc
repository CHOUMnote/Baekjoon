#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool *arr{new bool[10001]};
    int count = 0;

    for (int i = 2; i < 10001; i++)
        arr[i] = true;
    arr[1] = false;
    arr[0] = false;

    for (int i = 2; i * i < 10001; i++)
    {
        if (arr[i])
            for (int j = i * i; j < 10001; j += i)
                arr[j] = false;
    }

    int m,n;
    cin >> m >> n;
    vector<int> v;

    for(; m<n+1; m++)
        if(arr[m])
            v.emplace_back(m);
    
    if(v.empty()){
        cout << -1;
    }else{
        cout << accumulate(v.begin(),v.end(),0)<<'\n';
        cout << v[0];
    }
}
