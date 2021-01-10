#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll int64_t
#define ull uint64_t
#define MOD1 998244353
#define MOD2 1000000007
using namespace std;

int main() {
	IOS;
	int n;
	cin >> n;
	
	for(int i = 0;i < (1 << n);i += 1){
		bitset<16> b(i);
		b ^= (b >> 1);
		cout << b.to_string().substr(16 - n) << endl;
	}
	return 0;
}