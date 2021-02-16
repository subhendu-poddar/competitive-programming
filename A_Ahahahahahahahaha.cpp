#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//
void solve() {
    ll n,even=0,odd=0;
    cin >> n;
    vector<ll> v(n), ans;
    FOR(i,0,n) cin >> v[i];

    for(ll i=0;i<n;i+=2){
        if(v[i]==v[i+1]) {
            ans.pb(v[i]);
            ans.pb(v[i+1]);
        }
        else ans.pb(0);
    }
    cout << ans.size() << endl;
    FOR(i,0,ans.size()) cout << ans[i] << ' ';
    cout << endl;



}


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}