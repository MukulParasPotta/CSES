#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll int64_t
#define ull uint64_t
using namespace std;

int main() {
	IOS;
	ull n;
	cin >> n;
	cout << n << " ";
	while(n != 1){
		if(n & 1){
			n = 3 * n + 1;
		}
		else{
			n >>= 1;
		}
		cout << n << " ";
	}
	return 0;
}