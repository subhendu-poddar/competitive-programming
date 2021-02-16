#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//

void solve() {
	ll k,temp,sum,res,ans,n,x,y;
    cin>>n;
    vector<vector<ll>> adj(n+1,vector<ll>());
    FOR(i,0,n){
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vector<bool> vis(n+1,false);
    
    vector<vector<ll>> dp(n+1,vector<ll>(n+1,0));
    queue<ll> q;
    q.push(1);
    while(!q.empty()){
        
    }

}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}