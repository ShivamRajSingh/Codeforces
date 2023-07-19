#include<iostream>
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
	ll int k , r;
	cin>>k>>r;
	int x = 1;
	while(x <= 10){
		int temp = k * x;
		if(temp % 10 == 0 || temp % 10 == r){
			cout<<x<<endl;
			break;
		}

		x++;
	}
	return 0;
}