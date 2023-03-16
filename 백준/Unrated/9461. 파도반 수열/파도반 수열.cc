#include <bits/stdc++.h>
using namespace std;

long long dp[101] = {0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9};
int n;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  for (int i = 11; i <= 100; i++)
    dp[i] = dp[i - 2] + dp[i - 3];

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    cout << dp[t] << endl;
  }
}