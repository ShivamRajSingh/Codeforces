#include<bits/stdc++.h>
#include<algorithm>
#define ll long long int
using namespace std;

ll inf = 1e18;

int binSearchForMax (int l, int r, vector<ll> &arr, int ele)
{
    int mid;
    ll res = inf;
    while( l < r)
    {   
        mid = l + (r-l)/2;
        if(arr[mid] >= ele){
            res = min(res, arr[mid]);
            r = mid -1;
        }else{
            l = mid +1;
        }
    }
    return res;
}

int binSearchForMin (int l, int r, vector<ll> &arr, int ele)
{
    int mid;
    ll res = -inf;
    while( l < r)
    {   
        mid = l + (r-l)/2;
        if(arr[mid] <= ele){
            res = max(res, arr[mid]);
            l = mid +1;
        }else{
            r = mid -1;
        }
    }
    return res;
}

int main()
{
//     ll n,m;
//     cin >> n >> m;
//     vector<ll> a(n), b(m);
//     for(int i =0; i < n; i++)
//         cin >> a[i];
    
//     for(int i =0; i < m; i++)
//         cin >> b[i];

//     sort(a.begin(),a.end());
//     sort(b.begin(),b.end());

//     ll ans = inf;
//     for(int i = 0; i < n; i++){
//         ll d1 = binSearchForMax(0,m-1,b,a[i]);
//         ll d2 = binSearchForMin(0,m-1,b,a[i]);
//         ans = min({ans, abs(d2 - a[i]), abs(d1 - a[i])});
//     }

//     cout << ans << " ";
//     return 0;

    ll n, m;
	cin >> n >> m;
	vector<ll> v(n), p(m);
    for(int i =0; i < n; i++)
        cin >> v[i];
    
    for(int i =0; i < m; i++)
        cin >> p[i];

    sort(v.begin(),v.end());
    sort(p.begin(),p.end());

 
	ll ans = inf;
	for(int i = 0; i < n; i++){
		ll t = v[i];
		// trace1(t);
		ll l = 0, r = m - 1, d1 = -inf;
		while (l <= r) {
			ll md = (l + r) / 2;
			if (p[md] <= t) {
				d1 = max(p[md], d1);
				// trace1(d1);
				l = md + 1;
 
			}
			else {
				r = md - 1;
			}
			// trace3(l, r, d1);
		}
		l = 0;
		r = m - 1;
		ll d2 = inf;
		while (l <= r) {
			ll md = (l + r) / 2;
			if (p[md] >= t) {
				d2 = min(p[md], d2);
				// trace1(d2);
				r = md - 1;
 
			}
			else {
				l = md + 1;
			}
		}
		ans = min({ans, abs(d2 - t), abs(d1 - t)});
	}
	cout << ans << "\n";
}