#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> arr1(101);
    vector<int> arr2(65,0);

    arr1[1] = 500;
    arr2[1] = 512;

    for(int i=0; i<2; i++){
        arr1[i+2] = 300;
        arr2[i+2] = 256;
    }

    for(int i=0; i<3; i++)
        arr1[i+4] = 200;

    for(int i=0; i<4; i++)
        arr1[i+7] = 50;

    for(int i=0; i<5; i++)
        arr1[i+11] = 30;

    for(int i=0; i<6; i++)
        arr1[i+16] = 10;

    for(int i=0; i<4; i++)
        arr2[i+4] = 128;

    for(int i=0; i<8; i++)
        arr2[i+8] = 64;

    for(int i=0; i<16; i++)
        arr2[i+16] = 32;

    int n =0;
    int a,b;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> a >> b;
        cout << (arr1[a]+arr2[b])*10000 <<'\n';
    }
}