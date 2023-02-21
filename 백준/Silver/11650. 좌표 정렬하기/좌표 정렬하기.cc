#include <bits/stdc++.h>
using namespace std;

void run();

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    vector<pair<int,int>> arr{};

    cin >> n;
    
    for(int i = 0; i<n; i++){
        int a,b;
        cin >> a >> b;
        arr.emplace_back(make_pair(a,b));
    }

    std::sort(arr.begin(), arr.end());
    std::for_each(arr.begin(), arr.end(), [](pair<int,int>& in){
        cout << in.first << ' ' << in.second << '\n';
    });
    
}