#include <bits/stdc++.h>
using namespace std;
#define ll long long;

map<int,long long> tree{
    {210000000,-1},
    {-1,-1}
}; //{value : depth}
long long sum=0;

void insert(int n){
    auto upper = tree.upper_bound(n);
    auto lower = upper;
    lower--;
    long long current_depth = max(upper->second, lower->second); //이 둘은 반드시 루트 ~ 내 부모 둘중 하나임
    //avl이기 때문에
    auto result = tree.emplace(make_pair(n,current_depth+1)); //최대 깊이 + 1에 내가 들어감

    assert(result.second);
    sum += result.first->second;
    cout << sum << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,a;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        insert(a);
    }

    // for(auto i=tree.begin(); i!=tree.end(); i++){
    //     cout << i->first << " " << i->second << '\n';
}