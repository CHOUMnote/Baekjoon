#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> arr;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  for (int i = 0; i < 3; i++)
  {
    int a, b;
    cin >> a >> b;
    arr.emplace_back(a, b);
  }

  pair<int, int> v1 = {arr[1].first - arr[0].first, arr[1].second - arr[0].second};
  pair<int, int> v2 = {arr[2].first - arr[1].first, arr[2].second - arr[1].second};
  int x;
  x = (v1.first * v2.second) - (v1.second * v2.first);

  if (x == 0)
    cout << 0;
  else if (x < 0)
    cout << -1;
  else
    cout << 1;
}