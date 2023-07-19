#include<iostream>
using namespace std;
int main(){
	int n; // no.of problems
	cin>>n;
	int a[n][3];
	int count;
	int sum =0;
	for (int i = 0; i < n; ++i)
	{
		for(int j=0 ; j<3 ;j++){
			cin>>a[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		count =0;
		for(int j=0 ; j<3 ;j++){
			if(a[i][j] ==1){
				count ++;
			}
		}
		if(count>=2){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
