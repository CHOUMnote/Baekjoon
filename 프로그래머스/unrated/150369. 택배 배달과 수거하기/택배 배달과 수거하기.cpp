#include <bits/stdc++.h>
using namespace std;

vector<int> biggest; //최대 원소 누적합 배열
vector<int> a,b;    //누적합 배열

long long solution(int cap, int n, vector<int> d, vector<int> p) {
    long long answer = 0;
    biggest.assign(n,0);
    a = d;
    b = p;

    for(int i=n-2;i!=-1;i--){
        a[i] = a[i] + a[i+1];
        b[i] = b[i] + b[i+1];
    }
    for(int i=0;i<n;i++)
        biggest[i] = max(a[i], b[i]);
    reverse(biggest.begin(),biggest.end());

    long long sum = 0;

    int idx = n;
    for(int i:biggest){
        if (i==0) break;
        else if(sum<i) {
            int t = i-sum;
            int fq = t%cap==0? t/cap : (t/cap)+1;            
            answer+=(fq*idx);
            sum+=cap*fq;
        }
        idx--;
    }

    return answer*2;
}