#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll int *arr,n;
	int k;
	unordered_map <int,int> m;
	cin>>n>>k;
	arr = new ll int [n];
	for(int i=0; i < n; i++)
	{
	    cin>>arr[i];
	}
	for(int i=0; i < n; i++)
	{
	    m.insert(arr[i] , i);
	}
	if(k <= m.size()){
		cout<<"YES\n";
		for (int i = 0; i < m.size(); ++i)
		{
			cout<<m[arr[i]]<<" ";
		}
	}else{
		cout<<"NO\n";
	}
	delete [] arr;
	return 0;
}