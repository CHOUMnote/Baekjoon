#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<bool> arr(31, 0);
    for (short i = 0; i < 28; i++) {
        short t;
        cin >> t;
        arr[t] = 1;
    }
    for (short i = 1; i <= 30; i++) {
        if (arr[i] == 0)
            cout << i << '\n';
    }
}