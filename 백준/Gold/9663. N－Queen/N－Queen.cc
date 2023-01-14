#include <bits/stdc++.h>
using namespace std;

int arr[15];
int n=0;
int result=0;

bool check(int a){//지금가지 배치한 퀸에 대해서 옆, 대각 체크, 열이 같은지는 체크안함 - 같은 행? 이것만 체크해주고 넘어감
    for(int i=0; i<a; i++){
        if(arr[i] == arr[a] or abs(arr[a] - arr[i])== a - i) //옆에 있나? + 대각선 체크
            return false;
    }
    return true;
}
void run(int a){
    if(a==n) //경우의 수 채움
        result++;
    else{
        for(int i=0; i<n; i++){
            arr[a]=i;//a=열 번호, arr[i] = 행 번호
            if(check(a)){
                run(a+1);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie();

    cin >> n;
    run(0);
    cout << result;
}