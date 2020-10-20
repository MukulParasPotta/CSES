#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll int64_t
#define ull uint64_t
using namespace std;

int main() {
	IOS;
	string s, t;
	map<char, int> m;
	cin >> s;
	for(char c : s){
		m[c] ++;
	}
	int odd = 0;
	for(const pair<char, int>& p : m){
		odd += p.second & 1;
	}
	if(odd >= 2){
		cout << "NO SOLUTION";
		return 0;
	}
	pair<char, int> o;
	for(const pair<char, int>& p : m){
		if(p.second % 2 == 0){
			for(int i = 0;i < p.second/2;i += 1)
				t.push_back(p.first);
		}
		else{
			o = p;
		}
	}
	for(int i = 0;i < o.second;i += 1){
		t.push_back(o.first);
	}
	for(auto it = m.rbegin();it != m.rend();it ++){
		if((*it).second % 2 == 0){
			for(int i = 0;i < (*it).second/2;i += 1)
				t.push_back((*it).first);
		}
	}
	cout << t;
	return 0;
}