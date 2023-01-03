#include <bits/stdc++.h>
using namespace std;

static int count{0};

int recursion(string& str, int l, int r){
    ::count+=1;
    if(l>=r) return 1;
    else if(str.at(l)!=str.at(r)) return 0;
    else return recursion(str, l+1, r-1);
}

int isPalindrome(string& str){
    return recursion(str, 0, str.length()-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string parm;
    int num =0;
    cin >> num;

    for(int i=0; i<num; i++){
        cin>>parm;
        cout << isPalindrome(parm) << " " << ::count << '\n';
        ::count = 0;
    }
}