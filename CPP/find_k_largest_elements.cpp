#include<bits/stdc++.h>
using namespace std;

vector <int> find_k_largest_elements_min_heap (int *arr , int n , int k){
	priority_queue <int , vector<int> , greater<int> > pq(arr,arr+k);
	
	int i = k;
	while (i < n ){
		if(arr[i] >= pq.top()){
			pq.pop();
			pq.push(arr[i]);
		}
		i++;
	}
	vector<int>v;
	while ( pq.empty() == false){
		v.push_back(pq.top());
		pq.pop();
	}
	
	return v;
	
}

vector <int> find_k_largest_elements (int *arr , int n , int k){
	priority_queue <int> pq(arr,arr+n);
	
	vector <int> v;
	while(k--){
		v.push_back(pq.top());
		pq.pop();
	}
	sort(v.begin() , v.end());
	return v;
}

int main()
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	
	int *arr = new int [n];
	cout<<"Enter elements in array : ";
	for(int i =0; i < n ; i++)
		cin>>arr[i];
	
	int k;
	cout<<"Enter the no. of greatest elements you want to find in the array :";
	cin>>k;	
	
	vector<int> v1 = find_k_largest_elements(arr,n,k);
	vector<int> v2 = find_k_largest_elements_min_heap(arr,n,k);
	
	for(vector <int> :: iterator it = v1.begin() ; it != v1.end() ; it++)
		cout<< *it <<" ";
	
	cout<<"\n";
	
	for(vector <int> :: iterator it = v2.begin() ; it != v2.end() ; it++)
		cout<< *it <<" ";
		
	delete [] arr;
	return 0;
}
