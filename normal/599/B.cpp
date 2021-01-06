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
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n, m;
ll arr[size_1d], brr[size_1d];
map<ll, vector<ll>> mp;

void Input() {
	cin >> n >> m;
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
		mp[arr[i]].push_back(i);
	}
	for (ll i = 0; i < m; i++)
		cin >> brr[i];
}

void Solve() {
	for (ll i = 0; i < m; i++) {
		if (mp[brr[i]].size() == 0) {
			cout << "Impossible";
			return;
		}
		else if (mp[brr[i]].size() > 1) {
			cout << "Ambiguity";
			return;
		}
		else {
			mp[brr[i]].pop_back();
			brr[i] = mp[brr[i]][0] + 1;
		}
	}
	cout << "Possible\n";
	for (ll i = 0; i < m; i++) {
		cout << brr[i] << " ";
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