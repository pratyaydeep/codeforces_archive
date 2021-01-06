//May the force be with me
#include "bits/stdc++.h"
#define f first
#define s second
#define inf 1e18
#define ll long long
#define mod 1000000007
#define pb push_back
#define vll vector<long long int>
#define ull unsigned long long
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(x) ((long long int)(x).size())
#define mll map<long long int, long long int>
#define pll pair<long long int, long long int>
#define endl "\n"
using namespace std;


void solve(){
	ll n, m;
	cin >> n >> m;
	vll a(n), b(m);
	for(auto &it:a)cin >> it;
	for(auto &it:b)cin >> it;
	ll l = 0, r = 0, ans = 0, sl = a[0], sr = b[0];
	while(l <= n and r <= m){
		if(sl < sr){
			l++;
			sl += a[l];
		}
		else if(sr < sl){
			r++;
			sr += b[r];
		}
		else{
			ans++;
			l++, r++;
			if(l<n)sl = a[l];
			else break;
			if(r<m)sr = b[r];
			else break;
		}
	}
	cout<<ans;
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