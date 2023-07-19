#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x =0;
	string s[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>s[i];
	}

	for (int i = 0; i<n; ++i)
	{
		string str = s[i];

		if(str[0] == '+'){
			x=x+1;
		}else if(str[0] == '-'){
			x=x-1;
		}
		cout<<x;
	}

}