#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector <ll> arr(n);
        map <ll,ll> m;
        for(int i =0; i < n; i++){
            cin>>arr[i];
            m[arr[i]]++;
        }
        vector<int>unique;
        for(auto x: m){
            if(x.second == 1){
                unique.push_back(x.first);
            }
        }
        if(unique.size() == 0){
            cout<<"-1\n";
            continue;
        }
        ll y = *min_element(unique.begin(),unique.end());
        for(int i =0; i < n; i++){
            if(y == arr[i]){
                cout<<i+1<<"\n";
                break;
            }
        }
    }
    return 0;
}