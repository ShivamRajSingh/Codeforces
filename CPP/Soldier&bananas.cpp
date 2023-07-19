#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int k;
	long int n; //dollars
	int w; //bananas
	cin>>k>>n>>w;
	long int loan =0;
	if (k>=1 && w>=1 && k<=1000 && w<=1000 && n>=0)
	{
		loan = n - (w*(w+1)/2)*k;
		loan =abs(loan);
		if(loan>0){
			cout<<loan;
		}else{
			cout<<"0";
		}
	}
	

	return 0;
}
