#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sort(int* arr){
    for(int i=0; i<4; i++){
        for(int j=0; j<4-i; j++){
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}
int avg(int* arr){
    int result = 0;
    while(*arr){
        result += *arr;
        arr++;
    }
    return result/5;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int arr[5];
    for(int i=0; i<5; i++)
        cin >> arr[i];

    sort(arr);

    cout << avg(arr); 
    cout << '\n';  
    cout << arr[2];
}