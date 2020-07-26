#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll int64_t
#define ull uint64_t
using namespace std;

int main() {
	IOS;
	int n, temp, mx = 0;
	ull sum = 0;
	cin >> n;
	cin >> mx;
	for(int i = 1;i < n;i += 1){
		cin >> temp;
		sum += (max(temp, mx) == mx ? (mx - temp) : 0);
		mx = max(temp, mx);
	}
	cout << sum;
	return 0;
}