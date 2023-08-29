#include <bits/stdc++.h>
using namespace std;
#define ll longlong;

vector<int> arr1;
vector<int> arr2;

void run() {
    sort(arr2.begin(), arr2.end());
    arr2.erase(unique(arr2.begin(),arr2.end()), arr2.end());

    for(int i=0; i<arr1.size(); i++){
        int a = lower_bound(arr2.begin(),arr2.end(), arr1[i]) - arr2.begin();
        cout << a << ' ';
    }
    cout << endl;
}

void input() {
    int a;
    cin >> a;
    arr1 = vector<int>(a);
    arr2 = vector<int>(a);
    for(int i=0; i<a; i++)
        cin >> arr1[i];
    arr2 = arr1;
}
int main() {
    input();
    
    run();
}