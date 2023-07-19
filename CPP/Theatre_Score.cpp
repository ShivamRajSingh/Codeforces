#include<iostream>
using namespace std;
int main(){
	int n,m,a;
	cin>>n>>m>>a;
	long long int tiles_along_length = n/a;
	long long int tiles_along_breadth = m/a;
	if(n % a !=0){
		tiles_along_length++;
	}
	if(m % a !=0){
		tiles_along_breadth++;
	}
	cout<<(tiles_along_breadth*tiles_along_length);
	return 0;
}