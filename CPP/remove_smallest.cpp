#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		bool flag = false;
		cin>>n;
		vector <int> v;
		for(int i =0 ; i < n ; i++){
			int temp;
			cin>>temp;
			v.push_back(temp);
		}
		sort(v.begin(), v.end());
		for(int i =0; i < n ; i++){
			if(v[i+1] - v[i] <= 1){
				vector <int> :: iterator it ;
				it = v.begin();
				v.erase(it);
				
				for(vector <int> :: iterator x = v.begin() ; x != v.end() ; x++){
					cout<<*x<<" ";
				}
			}else{
				flag = true;
				break;
			}
		}
		if(flag){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
