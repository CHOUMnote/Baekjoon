#include <bits/stdc++.h>

using namespace std;

void ccw();
int x1 ,x2 ,x3;
int y11, y2, y3;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> x1 >> y11 >> x2 >> y2 >> x3 >> y3;

  ccw();
}

void ccw(){
  int t1 = x1*y2 + x2*y3 + x3*y11;
  int t2 = x2*y11 + x3*y2 + x1*y3;
  int result = t1-t2;

  if(result == 0)
    cout << 0;
  if(result > 0)
    cout << 1;
  if(result < 0)
    cout << -1;
}