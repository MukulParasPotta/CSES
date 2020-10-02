#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll int64_t
#define ull uint64_t
using namespace std;

int main() {
	IOS;
	int t;
	cin >> t;
	while(t --){
		ull y, x;
		cin >> y >> x;
		ull mx = max(y, x);
		ull mn = min(y, x);
		ull result = (mx - 1) * (mx - 1);
		if(mx == mn) result += mx;
		else if(mx % 2){
			if(x == mx) result += mx * 2 - y;
			else result += x;
		}
		else{
			if(y == mx) result += mx * 2 - x;
			else result += y;
		}
		cout << result << endl;
	}
	return 0;
}