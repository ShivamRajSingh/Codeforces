#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string a, b, c, d;
	cin >> a >> b >> c >> d;
	map<string, ll> m;
	m[a]++;
	m[b]++;
	m[c]++;
	m[d]++;
	bool fl = 0;
	if (m["H"] && m["HR"] && m["2B"] && m["3B"]) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}

    return 0;
}