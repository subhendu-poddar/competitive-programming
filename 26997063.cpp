#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define FOR(i,n) for(i=0;i<n;i++)
#define mod 1000000007
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	IOS;

	ll r,c,q,t,x,y,ans,i,j;
	cin >> t;
	while(t--) {
		cin >> r >> c >> q;
		ll row[r], col[c];
		memset(row,0,sizeof(row));
		memset(col,0,sizeof(col));
		while(q--) {
			cin >> x >> y;
			row[x-1]++;
			col[y-1]++;
		}
		ll codd=0, rodd=0;
		FOR(i,r) if(row[i]%2!=0) rodd++;
		FOR(i,c) if(col[i]%2!=0) codd++;
		cout << (codd*(r-rodd) + rodd*(c-codd)) << endl;

	}

	return 0;
}