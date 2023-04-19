#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> arr;
vector<pair<int, int>> idx;
int row_size = 0;
void init_vec(vector<string> &board)
{
    row_size = board[0].size();
    for (auto i : board)
    {
        istringstream stream{i};
        vector<char> t(i.size());
        for (int j = 0; j < i.size(); j++)
        {
            stream >> t[j];
        }
        arr.emplace_back(move(t));
    }
}

void repair()
{
    for (int j = 0; j < arr[0].size(); j++)
    {
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            char t = arr[i][j];

            if (t == ' ')
            {   
                int pos = -1;
                for (int k = i; k >= 0; k--)
                {
                    if (arr[k][j] != ' '){
                        pos = k;
                        break;
                    }
                }
                if (pos != -1){
                    arr[i][j] = arr[pos][j];
                    arr[pos][j] = ' ';
                }
            }
        }
    }
}

void bfs()
{
    bool flag = false;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr[i].size() - 1; j++)
        {
            char target = arr[i][j];
            if (arr[i][j]!=' ' and arr[i][j] == target and arr[i + 1][j] == target and arr[i][j + 1] == target and arr[i + 1][j + 1] == target){
                idx.emplace_back(i, j);
                flag = true;
            }
        }
    }

    for (auto i : idx)
    {
        int x = i.first;
        int y = i.second;
        arr[x][y] = ' ';
        arr[x + 1][y] = ' ';
        arr[x][y + 1] = ' ';
        arr[x + 1][y + 1] = ' ';
    }
    idx.clear();

    repair();

    if(flag) bfs();
}
int solution(int m, int n, vector<string> l)
{
    int answer = 0;
    init_vec(l);

    bfs();

    for (auto i : arr)
        for (char j : i)
            if(j == ' ')
                answer++;
    return answer;
}