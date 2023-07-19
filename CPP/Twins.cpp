#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,i,temp;
	int total=0 , count = 1 ,sum=0;
	cin>>n;
	int *arr = new int[n];

	if( n > 0 && n<=100){
		for(i = 0 ; i < n ; i++){
			cin>>arr[i];
			if(arr[i] > 100 || arr[i] < 1)
				return 0;
			
			total+= arr[i];
		}
		for(i = 0 ; i < n ; i++){
			sum += arr[i];
			temp = total - sum;
			if(sum > temp){
				break;
			}else{
				count++;
			}
		}
		cout<<count;
	}
	delete []arr;
	return 0;
}
