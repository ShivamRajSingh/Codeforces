#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    ll n;
    ll k;
    vector<pair<int,int>>v;
    cin >> n >> k;
    for(int i =0; i< n; i++){
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(),v.end());
    ll t = k/n;
    vector <ll> count(n,t);
    ll p = k % n;
    for(int i =0; i <=p; i++){
        count[v[i].second]++;
    }

    for(int i =0; i < n; i++){
        cout << count[i] <<endl;
    }
    return 0;
}