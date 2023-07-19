#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	int sLength=0;
	int j =0;
	while(s[j]!='\0')
		sLength++;
	int h[26]={0};
	getline(cin,s);
	if(sLength <=100){
		for(int i=0 ; s[i]!='\0';i++){
				if(s[i]>97 && s[i]<=122 && s[i]!=101 && s[i]!=105 && s[i]!=111 && s[i]!=117 &&s[i]!=121){
					h[s[i]-97]++;
				}else if(s[i]>65 && s[i]<=90 && s[i]!=69 && s[i]!=73 && s[i]!=79 && s[i]!=85 && s[i]!=89){
					s[i]=s[i]+32;
					h[s[i]-97]++;
				}
			}

		for (int i = 0; s[i]!='\0'; ++i)
		{
			if(s[i]>=65 && s[i]<=90 && h[s[i]+32-97]){
				cout<<".";
				cout<<s[i];
				h[s[i]+32-97]--;
			}else if(s[i]>=97 && s[i]<=122 && h[s[i]-97]){
				cout<<".";
				cout<<s[i];
				h[s[i]-97]--;
			}
		}
	}
	return 0;
}
