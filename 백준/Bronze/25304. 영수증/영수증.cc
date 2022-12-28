#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll total, num, result;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    
    cin >> total >> num;

    for(int i=0; i<num; i++){
        int a, b;
        cin >> a >> b;
        result += (a*b);
    }

    if(result == total)
        cout << "Yes";
    else
        cout << "No";
}