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
	int arr[n];
	ll sum = 0;
	ll target;
	for(int i = 0;i < n;i += 1){
		cin >> arr[i];
		sum += arr[i];
	}
	ll ans = INT_MAX;
	for(int i = 0;i < 1 << n;i += 1){
		target = 0;
		for(int j = 0;j < n;j += 1){
			if(i & 1 << j) target += arr[j];
		}
		ans = min(ans, abs(sum - 2 * target));
	}
	cout << ans;
	return 0;
}