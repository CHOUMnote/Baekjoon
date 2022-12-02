#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    vector<int> v={0};
    int t;  
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> t;
        v.emplace_back(t);
    }
    for(auto iter=v.begin()+1;iter!=v.end();iter++)
        *iter += *(iter-1);
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a>>b;
        cout << (v[b]-v[a-1]) << "\n";
    } 
}