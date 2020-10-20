#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll int64_t
#define ull uint64_t
using namespace std;

int main() {
	IOS;
	int n;
	cin >> n;
	ull count = 0, i = 5;
	while(i <= n){
		count += n / i;
		i *= 5;
	}
	cout << count << endl;
	return 0;
}