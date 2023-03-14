#include <bits/stdc++.h>
using namespace std;

void run();

int n;
vector<long long> dp(1000001,0);

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  dp[1]=1;
  dp[2]=2;
  dp[3]=3;
  dp[4]=5;

  
  run();
}

void run()
{
  for(int i=5;i<=n;i++)
    dp[i] = (dp[i-1]+dp[i-2])%15746;
  
  cout << dp[n]<<endl;
}
