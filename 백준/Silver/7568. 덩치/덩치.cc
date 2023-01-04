#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<pair<int,int>> arr;
    int a,b;
    int count;
    cin >> count;
    for(int i=0; i<count; i++){
        cin >> a >> b;
        arr.emplace_back(a,b);
    }

    for(int i=0; i<count; i++){
        int rank = 1;
        for(int j=0; j<count; j++){
            if(i==j) continue;
            if(arr[i].first<arr[j].first and arr[i].second<arr[j].second) rank++;
        }
        cout << rank << " ";
    }
}