#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll int n;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n < 10){
			cout<<n<<"\n";
		}else{
			ll int k = n-10;
			ll int y = k/9;
			n += y;
			cout<<n+1<<"\n";
		}	
	}
	return 0;
}
