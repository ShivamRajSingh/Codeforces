#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int s , n;
	cin>>s>>n;
	long long int x[n],y[n];
	bool flag;
	int i,j,k;
	i=0;
	while(i < n){
		cin>>x[i]>>y[i];
		i++;
	}
	for(i =0; i < n-1; i++){
		for(j = k =i ; j < n ; j++){
			if(x[j] < x[k]){
				swap(x[j] , x[k]);
				swap(y[j] , y[k]);
			}
		}
	}
	flag =false;
	for (i = 0; i < n; ++i)
	{
		if(s > x[i]){
			s += y[i];
		}else{
			flag = true;
			break;
		}
	}
	if(!flag){
		cout<<"YES";
	}else{
		cout<<"NO";
	}


	return 0;
}
