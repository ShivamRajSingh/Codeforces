#include<bits/stdc++.h>
using namespace std;
void water_trapped(long int *arr , long int n)
{
    long int lmax[n] , rmax[n];
    long int res = 0;
    lmax[0] = rmax[0] = arr[0];
    lmax[n-1] = rmax[n-1] = arr[n-1];
    for(int i=1 ; i<n-1 ; i++)
    {
        if(arr[i] > lmax[i-1]){
            lmax[i] = arr[i];
        }else{
            lmax[i] = arr[i-1];
        }
    }

    for(int i=n-2 ; i>=0 ; i++)
    {
        if(arr[i] > lmax[i+1]){
            lmax[i] = arr[i];
        }else{
            lmax[i] = arr[i+1];
        }
    }
    for(int i =1 ; i<n-1 ; i++)
    {
        res += min(lmax[i],rmax[i])-arr[i];   
    }
    cout<<res<<"\n";
}

int main()
 {
    int t;
	long int *arr,n;
	cin>>t;
	while(t--)
    {
    	cin>>n;
	    arr = new long int [n];    
	    for(int i =0; i<n ; i++)
	    {
	        cin>>arr[i];
	    }
	    water_trapped(arr,n);
	}
	
	delete [] arr;
	return 0;
}
