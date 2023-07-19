#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    int i = 0;
    while(i < 3){
        cin>>arr[i];
        i++;
    }
    sort(arr,arr+3);
    int sum = (arr[2]-arr[1]) + (arr[1]-arr[0]);
    cout<<sum;
}