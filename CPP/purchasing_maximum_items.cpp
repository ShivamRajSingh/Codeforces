#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
	priority_queue <int , vector<int> , greater<int> > pq;
	ll int n,temp;
	ll int amount;
	cout<<"Enter the no. of items : ";
	cin>>n;
	cout<<"Enter cost of items : ";
	while(n--){
		cin>>temp;
		pq.push(temp);
	} 
	cout<<"Enter the amount you had :"<<endl;
	cin>>amount;
	int res = 0;
	while(pq.top() <= amount){
		res++;
		amount -= pq.top();
		pq.pop();
	}
	cout<<"You can purchase "<<res<<" items.";
	return 0;
}
