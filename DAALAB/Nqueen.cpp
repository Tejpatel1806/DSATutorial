// aa program ma aapde evu karsu k first column ma queen muksu explain pela daa na je page che tema lakhelu j che

#include <bits/stdc++.h>
using namespace std;

bool isSafe1(int row, int col, vector<string> board, int n)
{
	int duprow = row;
	int dupcol = col;

	while (row >= 0 && col >= 0)
	{
		if (board[row][col] == 'Q')
			return false;
		row--;
		col--;
	}

	col = dupcol;
	row = duprow;
	while (col >= 0)
	{
		if (board[row][col] == 'Q')
			return false;
		col--;
	}

	row = duprow;
	col = dupcol;
	while (row < n && col >= 0)
	{
		if (board[row][col] == 'Q')
			return false;
		row++;
		col--;
	}
	return true;
}
void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n)
{
	if (col == n)
	{
		ans.push_back(board);
		return;
	}
	for (int row = 0; row < n; row++)
	{
		if (isSafe1(row, col, board, n))
		{
			board[row][col] = 'Q';
			solve(col + 1, board, ans, n);
			board[row][col] = '.';
		}
	}
}
vector<vector<string>> solveNQueens(int n)
{
	vector<vector<string>> ans;
	vector<string> board(n);
	string s(n, '.');
	for (int i = 0; i < n; i++)
	{
		board[i] = s;
	}
	solve(0, board, ans, n);
	return ans;
}
int main()
{
	vector<vector<string>> finalans;
	int n;
	cout<<"ENTER the size of chessboard(4*4) then enter 4: ";
	cin>>n;
	finalans=solveNQueens(n);
	for(int i=0;i<finalans.size();i++)
	{
		for(int j=0;j<finalans[i].size();j++)
		{
			cout<<finalans[i][j]<<" ";
			cout<<endl;
		}
		cout<<endl;
	}
	
}