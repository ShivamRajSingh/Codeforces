#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int n,m;
    cin>>n>>m;
    ll int sum = n;
    ll int quotient = n/m;
    sum += quotient;
    do{
        sum++;
        quotient++;
    }while(quotient * m < sum);

    cout<<sum-1<<"\n";
}