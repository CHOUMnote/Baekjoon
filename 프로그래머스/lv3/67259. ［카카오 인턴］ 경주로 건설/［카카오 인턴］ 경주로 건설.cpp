#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define INF 100000000
class point;

vector<int> mx{-1, 1, 0, 0};
vector<int> my{0, 0, -1, 1};
queue<point> q;
int w[25][25][4];

class point{
    public:
        int x, y, z, w;
};
void init(){
    for(int i=0; i<25; i++)
        for(int j=0; j<25; j++)
            for(int k=0; k<4; k++)
                w[i][j][k] = INF;
    for(int i=0; i<4; i++)
        w[0][0][i] = 0;
}

int solution(vector<vector<int>> arr) {
    init();
    int n = arr.size();
    int m = arr[0].size();

    q.push({0,0,-1,0});   //위 아래 둘다 출발

    //bfs
    while(!q.empty()){
        point p = q.front(); q.pop();

        for(int i=0; i<4; i++){
            int nx = p.x+mx[i];
            int ny = p.y+my[i];
            int next_z = i;
            int next_w = 100;

            if(nx<0 or ny<0 or nx>=m or ny>=n or arr[ny][nx]==1) continue;
            //왼 오 0,1
            if(p.z == 0 or p.z == 1){
                if(next_z == 2 or next_z == 3){
                    next_w+=500;
                }
            }
            //위 아래 2,3
            if(p.z == 2 or p.z == 3){
                if(next_z == 1 or next_z == 0){
                    next_w+=500;
                }
            }

            next_w = p.w+next_w;
            if(next_w < w[ny][nx][i]){
                w[ny][nx][i] = next_w;
                q.push({nx,ny,i,next_w});
            }
        }
    }

    return *(min_element(w[n-1][n-1],w[n-1][n-1]+4));
}
