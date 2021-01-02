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
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	vector<string> v;
	do{v.push_back(s);}while(next_permutation(s.begin(), s.end()));
	cout << v.size() << endl;
	for(string& s : v){
		cout << s << endl;
	}
 	return 0;
}