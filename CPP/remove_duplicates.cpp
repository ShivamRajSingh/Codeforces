#include <bits/stdc++.h>
#include <utility>
#include <set>
#define ll long long 
using namespace std;
int main()
{
	ll int *arr,n;
	cin>>n;
	arr = new ll int [n];
	for(int i=0; i < n; i++)
	{
	    cin>>arr[i];
	}
	vector<int>v;
	for(int i=n-1 ; i>=1; i--){
		if(arr[i] > 0)
			v.push_back(arr[i]);
		for(int j = i-1 ; j>=0 ; j--){
			if(arr[i] == arr[j]){
				arr[j] = -1;
			}
		}
	}
	cout<<v.size()<<"\n";
	for(int i = v.size()-1 ; i>=0 ; i--)
		cout << v[i] <<" ";
	
	delete [] arr;
	return 0;
}
