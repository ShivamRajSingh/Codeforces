#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll int n;
    cin>>n;
    ll int *arr = new ll int [n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int res , count;
    res = 0;
    count = 0;
    for(int i =0; i < n-1 ; i++){
        if(arr[i+1] >= arr[i]){
            count++;
        }else{
            count = 0;
        }
        res = max(count , res);
    }
    cout<<res+1;
    delete [] arr;
}