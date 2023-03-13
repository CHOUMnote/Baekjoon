#include <bits/stdc++.h>
using namespace std;

void run();
int n;
vector<int> arr;
int x, y;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    arr.push_back(t);
  }
  sort(arr.begin(), arr.end());
  run();
}

void run()
{
  int a = 0;
  int b = n - 1;
  int less = arr[a] + arr[b];
  x = a;
  y = b;

  while (a < b)
  {
    int sum = arr[a] + arr[b];
    if(abs(sum) < abs(less)){
      less=sum;
      x=a;
      y=b;
    }
    if (sum > 0)
    {
      b--;
    }
    else if (sum < 0)
    {
      a++;
    }
    else
      break;
  }

  cout << arr[x] << ' ' << arr[y] << endl;
}