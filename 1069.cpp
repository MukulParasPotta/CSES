#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll int64_t
#define ull uint64_t
using namespace std;

int main() {
	IOS;
	string s;
	cin >> s;
	char c = s[0];
	int temp = 1, mx = 1;
	for(int i = 1;i < s.size();i += 1){
		if(s[i] == c)
			temp += 1;
		else{
			mx = max(mx, temp);
			temp = 1;
			c = s[i];
		}
	}
	cout << max(mx, temp);
	return 0;
}