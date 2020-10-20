#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll int64_t
#define ull uint64_t
using namespace std;

int main() {
	IOS;
	ull t, a, b;
	cin >> t;
	while(t --){
		cin >> a >> b;
		if(a < b) swap(a, b);
		if((a + b) % 3 == 0 && a <= 2 * b){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}