#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;

  int idx = 0;
  for (auto i = str.begin();i != str.end();i++) {
    cout << *i;
    idx+=1;
    if(idx==10){
      cout << '\n';
      idx=0;
    }
  }
}