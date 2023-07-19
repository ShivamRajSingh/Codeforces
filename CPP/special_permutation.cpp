#include<iostream>
using namespace std;
#define ll long long 
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         for(int i =1; i <=n; i++){
//             cout << (i+1)%n +1 << " ";
//         }
//     }
//     return 0;
// }
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        a[i] = (i+1)%n + 1;
        cout<<a[i]<<" ";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}