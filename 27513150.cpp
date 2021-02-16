#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define FOR(i,n) for(i=0;i<n;i++)
#define mod 1000000007

ll maxvalue(ll a,ll b){
    if (a==b)
        return a;
    ll final = 0;
    ll rev = 0;
    while(b){
        final*=2;
        if (b%2==1 || a != b)
            final++;
        a/=2;
        b/=2;
    }
    //return final;
    while(final){
        rev *= 2;
        rev += final % 2;
        final/=2;
    }
    return rev;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	IOS;

	ll t,a,b;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		cout << maxvalue(a,b) << endl;
	}



	return 0;
}