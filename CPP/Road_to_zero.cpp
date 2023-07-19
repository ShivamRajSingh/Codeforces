#include<iostream>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll int x,y,a,b;
        cin >> x >> y;
        cin >> a >> b;
        if(x == 0 && y == 0){
            cout<<"0\n";
            continue;
        }
        int prod = 2*a;
        if (prod <= b){
            cout << (x + y)*a <<endl;
        }else{
            if ( x < y){
                cout << ( x*b + (y-x)*a ) << endl;
            }else{
                cout << ( y*b + (x-y)*a ) << endl;
            }
        }
    }
    return 0;
}