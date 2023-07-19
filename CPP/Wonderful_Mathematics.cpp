#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	getline (cin ,s);
	char temp;
	for	(int i=0 ; s[i]!='\0'; i++){
		if(s[i]!='+'){
			for(int j=0; s[j]!='\0'; j++){
				if(s[j]>s[i] && s[j]!='+'){
					temp = s[i];
					s[i] = s[j];
					s[j] = temp;
				}
			}
		}	
	}
	cout<<s;
	return 0;
}
