#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int main()
{
    ll int n;
    cin >> n;
    vector <ll int> arr;
    while(n > 0){
        arr.push_back(n % 2);    
        n= n/2;  
    }    
    int sum = 0; 
    for(int i= arr.size()-1 ;i>=0 ;i--)    
    {    
        sum += arr[i];
    }    
    cout << sum;
    return 0;
}