#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll int64_t
#define ull uint64_t
using namespace std;

int main() {
	IOS;
	ull n, temp;
	cin >> n;
	ull s = n * (n + 1) / 2;
	ull sum = 0;
	for(int i = 0;i < n - 1;i += 1){
		cin >> temp;
		sum += temp;
	}
	cout << s - sum;
	return 0;
}