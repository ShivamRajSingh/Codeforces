#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int main(){
    int n,t,a=1;
    cin >> n >> t;
    if(n==1&&t==10)
        cout<<-1;
    else{
        cout<<t;
        if(t==10)
            a++;
        for(a;a<n;a++)
            cout<<0;
    }
}