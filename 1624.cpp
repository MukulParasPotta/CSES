#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll int64_t
#define ull uint64_t
#define MOD1 998244353
#define MOD2 1000000007
using namespace std;

bool safe(vector<vector<int>>& board, int row, int col){
	if(board[row][col] == -1)
		return false;
	for(int i = 0;i < col;i += 1)
		if(board[row][i] == 1)
			return false;
	for(int i = row, j = col;i >= 0 && j >= 0;i --,j --)
		if(board[i][j] == 1)
			return false;
	for(int i = row, j = col;j >= 0 && i < board.size();i ++,j --)
		if(board[i][j] == 1)
			return false;
	return true;
}

bool solveNQUtil(vector<vector<int>>& board, int col, int& count){
	if(col == board.size()){
		count += 1;
		return true;
	}
	bool res = false;
	for(int i = 0;i < board.size();i += 1){
		if(safe(board, i, col)){
			board[i][col] = 1;
			res = solveNQUtil(board, col + 1, count) || res;
			board[i][col] = 0;
		}
	}
	return res;
}

void solveNQ(vector<vector<int>>& board){
	int count = 0;
	if(!solveNQUtil(board, 0, count)){
		cout << 0;
	}
	cout << count;
}

int main() {
	IOS;
	char c;
	vector<vector<int>> board(8, vector<int>(8, 0));
	for(int i = 0;i < 8;i += 1){
		for(int j = 0;j < 8;j += 1){
			cin >> c;
			if(c == '*')
				board[i][j] = -1;
		}
	}
	solveNQ(board);
	return 0;
}