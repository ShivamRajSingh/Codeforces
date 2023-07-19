#include<bits/stdc++.h>
using namespace std;
int minSteps_memo(int n , int *ans){
	if(n==1){
		ans[n] = 0;
		return 0;
	}
	if(ans[n-1] == -1)
		ans[n-1] = minSteps_memo(n-1,ans);
		
	int y,z;
	y = z = INT_MAX;
	if(n%2 == 0){
		if(ans[n/2] == -1)
			ans[n/2] = minSteps_memo(n/2,ans);
			
		y = ans[n/2];
	}
	if(n%3 == 0){
		if(ans[n/3] == -1)
			ans[n/3] = minSteps_memo(n/3,ans);
			
		z = ans[n/3];
	}
	ans[n] = 1 + min(ans[n-1] , min(y,z));
	return ans[n];
}
int minSteps_better (int n , int *ans){
	ans[0] = ans[1] = 0;
	ans[2] = ans[3] = 1;
	int x,y,z;
	for(int i = 4 ; i <= n ;i++){
		x = ans[i-1]+1;
		y = z = INT_MAX;
		
		if( i % 2 == 0){
			x = ans[i/2]+1;
		}
		if( i % 3 == 0){
			y = ans[i/3]+1;
		}
		ans[i] = min(x, min(y,z));
	}
	return ans[n];
}

int minSteps_better(int n ){
	int *ans = new int [n+1];
	for(int i =0 ; i < n+1 ; i++)
		ans[i] = -1;
	
	return minSteps_better(n,ans);
}
int minSteps_memo(int n ){
	int *ans = new int [n+1];
	for(int i =0 ; i < n+1 ; i++)
		ans[i] = -1;
	
	return minSteps_memo(n,ans);
}
int main(){
	int n;
	cin>>n;
	cout<<minSteps_memo(n)<<endl;
	cout<<minSteps_better(n)<<endl;
	return 0;
}
