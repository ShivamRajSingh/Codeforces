#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int res = a;
    while (a >= b){
        int temp = a;
        a = a/b;
        res += a;
        a = a + (temp % b);
    }
    cout<<res;
}