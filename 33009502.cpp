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
void swap(ll& x, ll& y){
    ll temp=x;
    x=y;
    y=temp;
}
void transitiveClosure(ll** graph, ll n) 
{ 
    ll reach[n+1][n+1], i, j, k; 
    for (i = 1; i <=n; i++) 
        for (j = 1; j <=n; j++) 
            reach[i][j] = graph[i][j]; 
    for (k = 1; k <=n; k++) 
    { 
        // Pick all vertices as source one by one 
        for (i = 1; i <=n; i++) 
        { 
            // Pick all vertices as destination for the 
            // above picked source 
            for (j = 1; j <=n; j++) 
            { 
                // If vertex k is on a path from i to j, 
                // then make sure that the value of reach[i][j] is 1 
                reach[i][j] = reach[i][j] || (reach[i][k] && reach[k][j]); 
            } 
        } 
    } 
} 
  


void solve() {
	ll temp,sum,res,ans=0,n,m,cnt=0,x,y;
	cin>>n>>m;
	ll arr[n+1];
	For(i,1,n){
		cin>>arr[i];
	}
    vector<ll> v[n+1];
    vector<bool> vis(n+1, false);
    For(i,1,n){
        if (vis[i] || arr[i]==i){
            continue;
        }
        ll j=i;
        while (!vis[j]){
            v[cnt].pb(j);
            vis[j] = true;
            j = arr[j];
        }
        ++cnt;
    }
    ll **mat=new ll* [n+1];
    FOR(i,0,n+1) mat[i]=new ll [n+1];
    For(i,0,n) For(j,0,n) mat[i][j]=false;
    FOR(i,0,m){
        cin>>x>>y;
        mat[x][y]=1;
        mat[y][x]=1;
    }
    transitiveClosure(mat,n);
    FOR(i,0,cnt){
        temp=v[i].size();
        ll a[temp];
        a[0]=0;
        FOR(j,1,temp){
            a[j]=a[j-1]+1;
            FOR(l,0,j){
                if(mat[v[i][j]-1][v[i][l]-1] || mat[v[i][l]-1][v[i][j]-1]){
                    a[j]=min(a[j],a[l]+j-l-1);
                }
            }
        }
        ans+=a[temp-1];
    }

    cout<<ans<<endl;

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