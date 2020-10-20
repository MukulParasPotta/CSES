#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll int64_t
#define ull uint64_t
#define MOD 1000000007
using namespace std;

ull powmod(ull a, ull b){
	a %= MOD;
	ull res = 1;
	while(b > 0){
		if(b & 1) res = (res * a) % MOD;
		a = (a * a) % MOD;
		b >>= 1;
	}
	return res;
}

int main() {
	IOS;
	int n;
	cin >> n;
	cout << powmod(2, n) << endl;
	return 0;
}