#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll int64_t
#define ull uint64_t
#define MOD1 998244353
#define MOD2 1000000007
using namespace std;

void hanoi(int n, int a, int b, int c){
	if(n > 0){
		hanoi(n-1, a, c, b);
		cout << a << " " << c << endl;
		hanoi(n-1, b, a, c);
	}
}

int main() {
	IOS;
	int n;
	cin >> n;
	cout << (1 << n) - 1 << endl;
	hanoi(n, 1, 2, 3);
	return 0;
}