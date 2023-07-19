#include<iostream>
using namespace std;
int main(){
	long int n; //the number of shops in the city that sell Vasiliy's favourite drink.
	cin>>n;
	long int prices[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>prices[i]; // prices of the bottles of the drink in the i-th shop
	}
	long int q; // the number of days Vasiliy plans to buy the drink.
	cin>>q;
	long int m[q];
	for (int i = 0; i < q; ++i)
	{
		cin>>m[i]; // the number of coins Vasiliy can spent on the i-th day.
	}
	int i,j;
	int count;
	for (j=0; j < q; j++)
	{
		count =0;
		for(i = 0 ;i < n;i++){
			if(m[j]>=prices[i]){
				count++;
			}
		}		
		cout<<count<<endl;
	}
	return 0;
}
