#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    cin >> n;
    int a = n/8, b=n%8;
    for(int i=0; i<a; i++)
        cout << "long long" << ' ';
    if(b)
        cout << "long" << ' ';
    cout << "int\n";

    return 0;
}

