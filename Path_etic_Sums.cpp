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
	int k,temp,sum,res,n,x,y;
	cin >> n;
	vector<vector<int>> adj(n+1);
	vector<int> ans(n+1);
	FOR(i,1,n){
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	vector<bool> vis(n+1,false);
	
	queue<int> q;
	q.push(1);
	vis[1]=true;
	ans[1]=1;
	while(!q.empty()){
	    int x=q.front();
	    q.pop();
	    
	    FOR(i,0,adj[x].size()){
	        k = adj[x][i];
	        if(!vis[k]){
	            vis[k]=true;
	            ans[k] = 3-ans[x];
                q.push(k);
	        }
	    }
	}
	For(i,1,n) cout << ans[i] << ' ';
	cout << endl;
	
	

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