#include<iostream>
using namespace std;
int main(){
	int n ,k;
	cin>>n>>k;
	if(n>=1 && n<=50 && k>=1 && k<=50){
		int a[n];
		int count=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if(a[i-1]<0){
				return 0;
			}
			/* code */
		}
		int i = k-1;
		if(a[i] == 0){
			for (int j = 0; j < n; j++)
			{
				/* code */
				if(a[j]>a[i]){
					count++;
				}
			}
			cout<<count;
		}else{
			int j;
			count=0;
			for(j=i+1 ; j<n ;j++){
				if(a[j]>=a[i]){
					count++;
				}
			}
			cout<<(k+count);
		}	
	}
	return 0;
}
