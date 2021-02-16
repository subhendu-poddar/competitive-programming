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

ll find(vector<ll>& a, vector<ll>& b, vector<bool> vis, ll ind, ll n){

    if(ind>=n) return 0;
    ll ans=0;
    FOR(i,0,n){
        if(!vis[i]){
            vis[i]=true;
            ans = max(ans, (a[ind]^b[i])+find(a,b,vis,ind+1,n));
            vis[i]=false;
        }
    }
    return ans;
}

void solve() {
	ll k,temp,sum,res,ans=0,n;
    cin >> n;
    vector<ll> a(n), b(n);
    FOR(i,0,n) cin >> a[i];
    FOR(i,0,n) cin >> b[i];

    vector<bool> vis(n,false);
    cout << find(a,b,vis,0,n) << endl;

}


int main()
{
    freopen("input.txt","r", stdin);
	IOS;
	ll t;
	t=1;
	//cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}