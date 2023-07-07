#include <bits/stdc++.h>
using namespace std;
# define ll long long

struct st {
	vector<int> a;
	int no;
	int result;
};

st init(int c) {
	st t;
	t.no=c;
	t.a = vector<int>(10000);
	t.result = 0;
	vector<int> case1 = { 1, 2, 3, 4, 5 };
	vector<int> case2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
	vector<int> case3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
	if (c == 1) {
		for (int i = 0; i < 10000;i++)
			t.a[i] = case1[i % 5];
	}
	else if (c == 2) {
		for (int i = 0; i < 10000;i++)
			t.a[i] = case2[i % 8];
	}
	else if (c == 3) {
		for (int i = 0; i < 10000;i++)
			t.a[i] = case3[i % 10];
	}

	return t;
}


vector<int> solution(vector<int> answers) {
	st a = init(1);
	st b = init(2);
	st c = init(3);

	int x1=0,x2=0,x3=0;
	for(int i=0; i<answers.size(); i++){
		if(a.a[i]==answers[i])
			x1+=1;
		if(b.a[i]==answers[i])
			x2+=1;
		if(c.a[i]==answers[i])
			x3+=1;
	}

	vector<int> x{x1,x2,x3};

	int max_value = *max_element(x.begin(), x.end());
	vector<int> result;
	if(max_value == x1)
		result.push_back(1);
	if(max_value == x2)
		result.push_back(2);
	if(max_value == x3)
		result.push_back(3);

	return result;
}