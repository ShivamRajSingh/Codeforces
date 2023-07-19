#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int row, col;
	int moves =0;
	int x;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; j++)
		{
			cin>>x;
			if(x == 1){
				row = i;
				col = j;
			}
		}
	}
	moves = abs(row -3) + abs(col -3);
	cout<<moves;
	return 0;
}
