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
	ll k,temp,sum,res,ans,n,m,x,y,query;
    cin >> n >> m >> k;
    vector<vector<ll>> adj(n+1);
    vector<bool> vis(n+1,false);
    unordered_map<ll,ll> mp;
    queue<ll> q;

    FOR(i,0,m){
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    FOR(i,0,k){
        cin >> x;
        q.push(x);
        vis[x]=true;
        mp[x] = 1;
    }

    while(!q.empty()){
        ll t = q.front();
        q.pop();
        for(auto i:adj[t]){
            if(!vis[i]){
                q.push(i);
                mp[i] = mp[t]+1;
                vis[i]=true;
            }
        }
    }

    cin >> query;
    while(query--){
        cin >> x;
        if(mp[x]){
            cout << mp[x]-1 << endl;
        }
        else{
            cout << -1 << endl;
        }
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