#include <bits/stdc++.h>
using namespace std;

void run();

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int t = 0;
    cin >> t;

    while(t--){
        run();
        cout << '\n';
    }
}

void run(){
    int x1,y1,r1,x2,y2,r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    int r = r1 + r2; //반지름의 합
    int subr = abs(r1-r2);
    double dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));   //두 점사이 거리

    if(dist == 0){ //좌표가 같을 때
        //cout << "a : ";
        if(r1 == r2)    //무한
            cout << -1;
        else    //같지만 다른 장소
            cout << 0;
    }else{  //서로 다른 위치일 때 
        //cout << dist << " : " << r << " : " << subr << '\n';
        if(dist<r and dist>subr)  
            cout << 2;
        else if(dist == r or dist == subr)  //한개만 바라봄
            cout << 1;
        else    
            cout << 0;
    }
}