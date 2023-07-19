#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a , b;
	cin>>a>>b;
	int count =0;
	// int LimakWeight , BobWeight;
	if( a <= b){
		while( a <= b){
			a = a*3;
			b = b*2;  
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
