#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll int *arr,n;
	int k;
	int hash[101] = {0};
	vector <int> v;
	cin>>n>>k;
	arr = new ll int [n];
	for(int i=0; i < n; i++)
	{
	    cin>>arr[i];
	    if(hash[arr[i]] <= 0 ){
	    	hash[arr[i]]++;
	    	v.push_back(i+1);
	    }
	}

	if(k<=v.size()){
		cout<<"YES\n";
		for(int i=0 ; i<k ; i++)
			cout<<v[i]<<" ";
	}else{
		cout<<"NO";
	}
	
	return 0;
}
