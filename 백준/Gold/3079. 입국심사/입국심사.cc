#include <bits/stdc++.h>
using namespace std;
# define ll long long

ll n, m, arr[100001];

bool check(const ll mid) {
	ll t = 0;
	for (int i = 0; i < n; i++) {
		t += mid / arr[i];
		if (t >= m)
			return 1;
	}
	return 0;
}

void go() {
	ll lo = 0, hi = 1e18;
	while (lo + 1 < hi) {
		ll mid = (lo + hi) / 2;
		if (check(mid))
			hi = mid;
		else
			lo = mid;
	}
	cout << hi;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	go();
}