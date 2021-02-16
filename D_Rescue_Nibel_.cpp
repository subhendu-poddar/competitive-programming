#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//


void solve() {
	ll k,temp=5,sum,res,ans,n, maxv=0;
    cin >> n >> k;
    ll a[n], b[n];
    FOR(i,0,n){
        cin >> a[i] >> b[i];
    }
    FOR(i,0,n) maxv=max(maxv,b[i]);
    vector<ll> act(maxv+3,0), minus(maxv+3,0);
    FOR(i,0,n){
        act[a[i]]++;
        act[b[i]+1]--;
        minus[b[i]+1]++;
    }
    
}


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t;
	t=1;
	//cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}