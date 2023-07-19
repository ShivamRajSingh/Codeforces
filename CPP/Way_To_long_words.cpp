#include<iostream>
#include<string>
using namespace std;
int main(){
	int n; // no. of test cases
	cin>>n;
	int j;
	int length;
	string str[n];
	for (int i = 0; i <=n; ++i)
	{
		getline (cin,str[i]);
		
	}
	for (int i = 0; i < n; ++i)
	{
		string s = str[i];
		j=0;
		length=0;
		while(s[j]!=0)
			length++;
		if(length >10){
			cout<<s[0]<<(length-2)<<s[length-1];
		}
	}
return 0;
}
