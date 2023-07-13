#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> arr(101,0);
    int n, m;
    cin >> n >> m;
    for(int l=0; l<m; l++){
        int i,j,k;
        cin >> i >> j >> k;
        for(;i<=j;i++)
            arr[i] = k;
    }

    for(int i=1; i<=n; i++)
        cout << arr[i] << ' ';

}