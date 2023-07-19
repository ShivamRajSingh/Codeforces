#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if( b>= a && b <= 6*a)
        cout <<"YES";
    else    
        cout << "NO";
    
    return 0;
}