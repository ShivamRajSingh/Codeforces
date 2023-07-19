#include<bits/stdc++.h>
using namespace std;
#define ll 
int main()
{
	int x,n;
	int t,odd,even;
	cin>>t;
	while(t--)
	{
		odd = even = 0;
		cin>>n;
		for(int i=0; i < n; i++)
		{
		    cin>>x;
		    if(x % 2 == 0){
		    	even++;
		    }else{
		    	odd++;
		    }
		}
		if(even>0 && odd>0){
			cout<<"YES\n";
		}else if (even ==0 && odd % 2 != 0){
			cout<<"YES\n";
		}else if (even ==0 && odd % 2 == 0){
			cout<<"NO\n";
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}
