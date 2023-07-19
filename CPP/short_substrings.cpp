#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector <char> findOriginal(string b){
	vector <char> a;
	int len = b.size();
	int i = 0;
	while(i <= len){
		a.push_back(b[i]);
		i+=2;
	}
	cout<<b[len-1]<<"*";
	// a.push_back(b[len]);
	return a;
}
int main(int argc, char const *argv[])
{
	int t;
	string b;
	cin>>t;
	while(t--){
		getline (cin,b);	
		vector <char> v = findOriginal(b);
		for(auto it = v.begin() ; it!= v.end() ; it++){
			cout<<*it;
		}
		cout<<"\n";
	}
	
	return 0;
}
