#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

void solve() {
    ll n,s,a,b,c,d,e,ans,val;
    cin >> n;
    cin >> a;
    val=pow(10,n);
    s=val*2 + a;
    cout << s << endl;
    cin >> b;
    c=val-b;
    cout << c << endl;
    cin >> d;
    e=val-d;
    cout << e << endl;
    cin >> ans;
    if(ans==-1) return;
}
int main()
{
	IOS;
	ll t;

	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}