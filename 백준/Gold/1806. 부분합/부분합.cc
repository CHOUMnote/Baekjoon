#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    int s = 0;
    cin >> n >> s;
    int arr[n] = {0,};

    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int a,b=0;
    int t=arr[0];
    int count=1;
    int result = 0x7fffffff;
    bool flag = false;
    while(a<=b and b<n){
        if(t>=s){//만족
            result = min(count, result);
            count-=1;
            t-=arr[a];
            a+=1;
            flag = true;
        }
        else{//만족 x
            b+=1;
            t+=arr[b];
            count+=1;
        }
    }

    if(flag)
        cout << result;
    else
        cout << 0;
}   
