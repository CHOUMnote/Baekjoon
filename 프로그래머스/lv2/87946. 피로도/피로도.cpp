#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<bool> check(100, false);
int result = 0;
bool cmp(vector<int> a, vector<int> b) {
    if (a[0] == b[0])
        return a[1] < b[1];
    else
        return a[0] > b[0];
}

void dfs(int k, int cnt, vector<vector<int>>& arr) {
    for (int i = 0; i < arr.size();i++) {
        auto& c = arr[i];
        if (k >= c[0] and !check[i]) {
            check[i] = true;
            dfs(k-c[1], cnt+1, arr);
            check[i] = false;
            result = max(result,cnt+1);
        }
    }
}

int solution(int k, vector<vector<int>> arr) {
    dfs(k, 0, arr);
    return ::result;
}
