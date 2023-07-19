#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll int n , m , tot;
	unordered_map <ll int ,ll  int> mp;
	cin>>n;
	cin>>m;
	ll int *arr = new ll int[n];
	tot = 0;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];	
	}
	// for(int i =0 ; i < n ; i++)
	// 	cout<<arr[i]<<" ";

	ll int temp2 = 0;
	while(m--){
		cin>>temp2;
		mp[temp2]++;
	}

	// for (unordered_map <ll int ,ll  int> :: iterator itr = mp.begin(); itr != mp.end(); ++itr) { 
    //     cout << '\t' << itr->first 
    //          << '\t' << itr->second << '\n'; 
    // } 
	for(int i =0; i < n ; i++){
		if(!mp.count(arr[i]))
			tot++;
	}
	cout<< tot;
	return 0;
}