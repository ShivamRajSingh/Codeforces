#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; // no. of matches played
	cin>>n;
	int Acount =0;
	int Dcount =0;
	char str[n];
	int i=0;
	while (n--){
		cin>>str[i];
		if(str[i] == 'A'){
			Acount++;
		}else{
			Dcount++;
		}
		i++;
	}	
	str[i]='\0';
	if(Acount > Dcount){
		cout<<"Anton";
	}else if(Acount == Dcount){
		cout<<"Friendship";
	}else{
		cout<<"Danik";
	}
	return 0;
}
