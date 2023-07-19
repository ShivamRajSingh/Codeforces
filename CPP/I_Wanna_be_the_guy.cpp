#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int hash[n+1]={0};
	int p,q,temp;
	cin>>p;
	while(p--){
		cin>>temp;
		hash[temp]++;
	}
	cin>>q;
	while(q--){
		cin>>temp;
		hash[temp]++;
	}
	int i;
	for(i = 1; i <= n+1 ; i++){
		cout<<hash[i]<<" ";
	}
	for(i = 1; i <= n+1 ; i++){
		if(hash[i] < 0){
			break;
		}
	}
	if(i == n+1){
		cout<<"I become the guy.";
	}else{
		cout<<"Oh, my keyboard!";
	}
	return 0;
}
