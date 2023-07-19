#include<bits/stdc++.h>
#define MAX 9,223,372,036,854,775,807
using namespace std;
long long int minimum;
long long int Diff (long long int a , long long int b ,long long int c){
	return (abs(a-b) + abs(a-c) + abs(b-c));
}
void find(long long int a , long long int b ,long long int c){
	long long int res = Diff(a,b,c);
	minimum = min(res,minimum); 
}

int main(long long int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long int a,b,c;
	cin>>a>>b>>c;
	minimum = MAX;
	find(a,b,c);
	find(a+1,b,c);
	find(a,b+1,c);
	find(a,b,c+1);
	find(a+1,b+1,c);
	find(a,b+1,c+1);
	find(a+1,b,c+1);
	find(a+1,b+1,c+1);

	find(a-1,b,c);
	find(a,b-1,c);
	find(a,b,c-1);
	find(a-1,b-1,c);
	find(a,b-1,c-1);
	find(a-1,b,c-1);
	find(a-1,b-1,c-1);

	find(a+1,b-1,c);
	find(a,b+1,c-1);
	find(a+1,b,c-1);

	find(a-1,b+1,c);
	find(a,b-1,c+1);
	find(a-1,b,c+1);
	

	cout<<minimum;
	return 0;
}
