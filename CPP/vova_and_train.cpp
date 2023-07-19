#include<bits/stdc++.h>
using namespace std;
int calculate_result(long int *arr , int n)
{
	long int L = arr[0];
	long int v = arr[1];
	long int l = arr[2];
	long int r = arr[3];
	int i=1 ,j=0;
	int count =0;
	if( (r == L && l ==1) || (r-l == 0) )
	{
		return 0;
	}
	j = 1 * v;
	while(i <= L && j <=L)
	{
		if(j < l || j > r){
			if(j == (v + (i-1)*v))
				count++;
		}
		i++;
		j=i*v;
	}
	return count;
}
int main()
{
	long int *arr;
	int t;
	cin>>t;
	while(t--)
	{
		arr = new long int [4];
		for(int i=0; i < 4; i++)
		{
		    cin>>arr[i];
		}
		cout<<calculate_result(arr,4)<<"\n";
	}

	delete [] arr;
	return 0;
}
