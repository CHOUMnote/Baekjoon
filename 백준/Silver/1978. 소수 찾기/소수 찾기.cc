#include <bits/stdc++.h>
using namespace std;

bool a(int n){
    if(n==1) return false;
    for(int i=2; i<n-1;i++)
        if(n%i==0) return false;
    return true; 
}
int main(){
    int n;
    int count = 0;
    queue<int> *q{new queue<int>};
    cin >> n;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        q->emplace(t);
    }   

    while(!q->empty()){
        if(a(q->front()))
            count++;
        q->pop();
    }

    cout << count;

}
