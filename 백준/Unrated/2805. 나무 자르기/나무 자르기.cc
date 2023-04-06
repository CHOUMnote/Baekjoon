#include <bits/stdc++.h>
#define ll long long;

using namespace std;

int n, m, v[1000000];

bool check(int mid){
    long long s = 0;
    for(int i : v)
        if(i>mid)
            s+=i-mid;
    return s>=m;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0;
    int h = 1000000000;
    int mid;
    while (l + 1 < h)
    {
        mid = (l + h) / 2;
        if (check(mid)) // mid 높이에서 잘랐을때 m보다 많음?
            l = mid;    // mid 높
        else            // ㄴㄴ 못자름
            h = mid;    // mid 낮
    }

    cout << l << '\n';
}

