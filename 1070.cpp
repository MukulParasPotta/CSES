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
	if(n == 1){
		cout << 1;
		return 0;
	}
	if(n > 1 && n < 4){
		cout << "NO SOLUTION";
		return 0;
	}
	//int arr[n];
	int temp = 2, i = 0;
	while(i < n / 2){
		cout << temp << " ";
		temp += 2;
		i += 1;
	}
	temp = 1;
	while(i < n){
		cout << temp << " ";
		temp += 2;
		i += 1;
	}
	return 0;
}