#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n , m;
	cin >> n>>m;
	int i,j;
	bool flag = true;
	for (i = 0; i < n; ++i)
	{
		if (i % 2 == 0){
			for(j = 0; j < m ; j++){
				cout<<"#";
			}
			cout<<"\n";
		}else{
			if(flag){
				for(j = 0; j < m-1 ; j++){
					cout<<".";
				}
				cout<<"#\n";
			}else{
				cout<<"#";
				for(j = 1; j < m ; j++){
					cout<<".";
				}
				cout<<"\n";
			}
			flag = !flag;
		}
		
	}
	return 0;
}
