/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n, x, y;
ll arr[size_1d];

void Input() {
	cin >> n >> x >> y;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

void Solve() {
	for (ll i = 0; i < n; i++) {
		bool flg = false;
		for (ll j = max(0ll, i - x); j <= min(n - 1, i + y); j++) if (arr[j] < arr[i]) flg = true;
		if (!flg) {
			cout << i + 1;
			return;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	//cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}