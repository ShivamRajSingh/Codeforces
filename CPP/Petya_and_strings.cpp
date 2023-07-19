#include<iostream>
using namespace std;
string toLower(string s){
	for (int i = 0; s[i]!='\0'; ++i)
	{
		if(s[i]>=65 && s[i]<=90){
			s[i]+=32;
		}
	}
	return s;
}
int main(){
	string s1, s2;
	int i,j;
	getline(cin,s1);
	getline(cin,s2);
	s1 = toLower(s1);
	s2= toLower(s2);
	for(i=0 ,j=0 ; s1[i]!='\0' || s2[j]!='\0' ; i++,j++){
		if(s1[i]!=s2[j]){
			break;
		}
	}
	if(s1[i] < s2[j]){
			cout<<"-1";
		}else if(s1[i] > s2[j]){
			cout<<"1";
		}else{
			cout<<"0";
		}
	return 0;
}
