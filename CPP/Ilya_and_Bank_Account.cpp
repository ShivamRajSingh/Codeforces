#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll int n;
    cin >> n;
    if ( n > 0 ){
        cout << n <<"\n";
    }else{
        ll int temp = n;
        ll int res;
        int lastDigit = temp % 10;
        
        temp = temp / 10;
        res = temp;

        temp = temp / 10;

        temp = temp * 10;
        temp += lastDigit;

        cout << -1*min(abs(res) , abs(temp));

    }
}
