#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{ 
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> arr(n);
        set<ll> s;
        for(int i =0; i < n; i++){
            cin>>arr[i];
            s.insert(arr[i]);
        }
        if(s.size() == 1){
            cout<<"0\n";
            continue;
        }
        else if(s.size() == n){
            cout<<"1\n";
            continue;
        }
        map<ll,ll> last,res;
        for(int i =0; i < n; i++){
            last[arr[i]] = -1;
            res[arr[i]] = 0;
        }
        
        for(int i =0;i<n;i++){
            if(last[arr[i]] + 1 == i){
                last[arr[i]] = i;
            }
            else{
                res[arr[i]]++;
                last[arr[i]] = i;
            }
            //cout<<ans[ouas[i]]<<" ";
        }
        //cout<<"\n";
        for(auto x: last){
            if(x.second != n-1){
                res[x.first]++;
            }
        }
        // for(auto x: last){
        //     cout<<x.first<<" "<<x.second<<"\n";
        // }
        // for(auto x: ans){
        //     cout<<x.first<<" "<<x.second<<"\n";
        // }
        ll mini = INT_MAX;
        for(auto x: res){
            mini = min(mini,x.second);
        }
        cout<<mini<<"\n";
    }
    return 0;
}