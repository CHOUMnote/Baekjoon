#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> arr(101);
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 1; i <= 100; i++)
        arr[i] = i;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        swap(arr[a],arr[b]);
    }

    for (int i = 1; i <= n; i++)
        cout << arr[i] << ' ';

}