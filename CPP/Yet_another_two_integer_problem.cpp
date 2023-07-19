#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	int t;
	ll int a,b;
	int count;
	cin>>t;
	while(t--){
		count = 0;
		cin>>a>>b;
		ll int diff = abs(b-a);
		if(diff % 10 == 0){
			count = diff;
			count = count/10;
		}else{
			count = diff/10;
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
