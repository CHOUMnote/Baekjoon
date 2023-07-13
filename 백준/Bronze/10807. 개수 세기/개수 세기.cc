#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, v;
    unordered_map<int,int> m;
    cin >> n;
    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        m[t]++;
    }
    cin >> v;
    auto x = m.find(v);
    if(x!=m.end())
        cout << m.at(v);
    else
        cout << 0;
    return 0;
}

