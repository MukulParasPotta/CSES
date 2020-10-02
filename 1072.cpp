#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll int64_t
#define ull uint64_t
using namespace std;

int main() {
	IOS;
	ll n;
	cin >> n;
	for(ll i = 1;i <= n;i += 1){
		cout << ((i*i*i*i - i*i)/2 - 4*(i - 1)*(i - 2)) << endl;
	}
	return 0;
}