#include <bits/stdc++.h>
#define ll long long
using namespace std;

queue<pair<int,int>> q;
vector<int> a{1,-1,0,0};
vector<int> b{0,0,1,-1};
int solution(vector<vector<int>> maps)
{
    int n = maps.size()-1;//y
    int m = maps[0].size()-1;//x
    maps[n][m] = -1;
    q.emplace(0,0);

    while(!q.empty()){
        auto c = q.front();
        q.pop();
        int x = c.first;
        int y = c.second;
        for(int i=0;i<4;i++){
            int nx = x+a[i];
            int ny = y+b[i];

            if(nx==0 and ny==0) continue;
            if(nx<0 or nx>m or ny<0 or ny>n) continue;
            if(maps[ny][nx] == 0) continue;
            if(maps[ny][nx]==1 or maps[ny][nx]==-1){
                maps[ny][nx]=maps[y][x]+1;
                q.emplace(nx,ny);
                }
            }
        }

    // for(int i=0; i<5; i++){
    //     for(int j=0;j<5;j++){
    //         cout << maps[i][j] << ' ';
    //     }cout << endl;
    // }
    return maps[n][m];
}