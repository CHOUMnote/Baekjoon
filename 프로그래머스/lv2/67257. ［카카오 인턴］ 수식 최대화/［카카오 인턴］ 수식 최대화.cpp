#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> arr{ "+","-","*" };
bool check[3];
string s[3];
vector<string> q;
ll result = 0;


ll oper(const string& a, const string& b, const string& op) {
    if (op == "+")
        return stoll(a) + stoll(b);
    else if (op == "-")
        return stoll(a) - stoll(b);
    else
        return stoll(a) * stoll(b);
}

void go() {
    string num;
    string op = "/";
    int idx = 0;
    vector<string> q1(q);
    vector<string> q2;
    for (int i = 0; i < 3; i++) {
        int size = q1.size();
        for (int j = 0;j < size;j++) {
            string a = q1[j];
            if (a == s[i]) {//연산자
                string x = q2.back();
                q2.pop_back();
                string y = q1[j+1];
                q1.erase(q1.begin()+j+1);
                ll temp = oper(x, y, a);
                q2.push_back(to_string(temp));
                // cout << x << a << y << '='<<temp<< endl;
            }
            else {//이하...
                q2.push_back(a);
            }
        }
        
        q1=q2;
        q2.clear();
    }

    result = max(result,abs(stoll(q1[0])));
}

// void dfs(int n){
//     s[0] = "*";
//     s[1] = "+";
//     s[2] = "-";
//     go();
// }
void dfs(int n) {
    if (n == 3) {
        go();
        // cout << endl;
        return;
    }
    else {
        for (int i = 0; i < 3; i++) {
            if (!check[i]) {
                check[i] = true;
                s[n] = arr[i];
                // cout << s[i] << '\n';

                dfs(n + 1);
                check[i] = false;
            }
        }
    }
}

void XD(string& str) {
    string token = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != '+' and str[i] != '-' and str[i] != '*' and str[i] != '/') {
            token += str[i];
        }
        else {
            q.push_back(token);
            q.push_back(str.substr(i, 1));
            token.clear();
        }
    }
    if (token != "") {
        q.push_back(token);
        token.clear();
    }
}

ll solution(string e) {
    XD(e);
    dfs(0);
    return result;
}