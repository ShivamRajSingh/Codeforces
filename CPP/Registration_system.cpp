#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	/* 4
abacaba
acaba
abacaba
acab

6
first
first
second
second
third
third
*/
	int t; 
	cin>>t;
	string s[t];
	int i=0;
	while(i<t){
		getline(cin,s[i]);
		i++;
	}
	int count[t] ={0};
	for (int i = 0; i < t-1; ++i)
	{
		for(int j = i ; j < t ; j++){
			if(s[i] == s[j]){
				count[i]++;
				s[j]=s[j] + (char)count[i];
				s[i]="OK";
			}
		}
	}
	for (int i = 0; i <t; ++i)
	{
		cout<<s[i]<<endl;
	}
	return 0;
}
