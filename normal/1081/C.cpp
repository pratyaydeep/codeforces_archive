//May the force be with me
#include "bits/stdc++.h"
#define f first
#define s second
#define inf 1e18
#define ll long long
#define mod 998244353
#define pb emplace_back
#define vll vector<long long int>
#define ull unsigned long long
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(x) ((long long int)(x).size())
#define mll map<long long int, long long int>
#define pll pair<long long int, long long int>
using namespace std;


void solve(){
	ll n, m, k;
	cin >> n >> m >> k;
	ll dp[k+1][n+1];
	for(ll i = 1; i < n+1; i++) for(ll j = 0; j < k+1; j++)dp[j][i] = 0;
	dp[0][1] = m;
	for(ll i = 2; i < n+1; i++){
		for(ll j = 0; j < k+1; j++){
			dp[j][i] = dp[j][i-1];
			if(j)dp[j][i] = (dp[j][i] + dp[j-1][i-1]*(m-1))%mod;
		}
	}
	cout << dp[k][n];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.precision(20);
	ll t = 1;
	//cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
	cin.get();
	return 0;
}
//g++ -Wshadow -Wall -O2 -Wno-unused-result -Wno-psabi