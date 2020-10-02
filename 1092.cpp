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
	ull s = ((n + 1) * n) >> 1;
	if(s & 1){
		cout << "NO" << endl;
		return 0;
	}
	vector<int> a, b;
	ull sa = 0, sb = 0;
	for(int i = n;i > 0;i --){
		if(sa < sb){
			a.push_back(i);
			sa += i;
		}
		else{
			b.push_back(i);
			sb += i;
		}
	}
	cout << "YES" << endl;
	cout << a.size() << endl;
	for(int& x : a){
		cout << x << " ";
	}
	cout << endl;
	cout << b.size() << endl;
	for(int& x : b){
		cout << x << " ";
	}
	cout << endl;
	return 0;
}