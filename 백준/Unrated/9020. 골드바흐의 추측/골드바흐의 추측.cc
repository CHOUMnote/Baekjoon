#include <bits/stdc++.h>
using namespace std;

void run(int);
void getPNum();

unordered_map<int,bool> mpNum;
vector<int> pNum;
int n;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  getPNum();
  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    run(t);
  }
}

void getPNum()
{
  bool *check = new bool[10001];

  for (int i = 2; i <= 10000; i++)
    check[i] = true;

  for (int i = 2; i*i <= 10000; i++)
    if (check[i])
      for (int j = i*i; j <= 10000; j += i)
        check[j] = false;

  for (int i = 2; i < 10001; i++)
    if (check[i]){
      mpNum[i]=true;
      pNum.push_back(i);
    }
}

void run(int q)
{
  vector<pair<int,int>> arr;
  for(int i=0;i<pNum.size(); i++){
    if(mpNum.find(q-pNum[i]) != mpNum.end()){
      arr.emplace_back(pNum[i],q-pNum[i]);
    }
  }

  int sub=2100000000;
  pair<int,int> result;
  for(auto i : arr){
    if(sub > abs(i.second - i.first)){
      sub = i.second - i.first;
      result = i;
    }
  }

  cout << result.first << ' ' << result.second << endl;
}