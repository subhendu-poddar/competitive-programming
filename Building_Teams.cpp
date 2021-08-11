#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define pr pair<ll,ll>
#define setpr(x) fixed<<setprecision(10)<<x
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n,a) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define INF 1000000000000
#define max_heap priority_queue<ll>
#define min_heap priority_queue<ll,vv<ll>,greater<ll>>
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//
void solve() {
    int k,temp,sum,res,n,m,x,y;
    cin >> n >> m;
    vv<vv<int>> adj(n+1,vv<int>());
    FOR(i,0,n){
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vv<int> ans(n+1,0);

    

    For(i,1,n){
        if(ans[i]!=0) {
            FOR(j,0,adj[i].size()){
                k = adj[i][j];
                if(ans[k]==ans[i]) {
                    cout << "IMPOSSIBLE" << endl;
                    return;
                }
                if(ans[k]==0) {
                    ans[k]=3-ans[i];
                }
            }
        }
        queue<pair<int,int>> q;
        q.push({i,1});
        ans[i]=1;
        while(!q.empty()){
            auto t = q.front();
            x = t.ff;
            y = t.ss;
            q.pop();
            FOR(j,0,adj[x].size()){
                k = adj[x][j];
                if(ans[k]==y){
                    cout << "IMPOSSIBLE" << endl;
                    return;
                }
                if(ans[k]!=0) continue;
                ans[k] = 3-y;

                q.push({k,3-y});
            }
        }
    }

    For(i,1,n) cout << ans[i] << ' ';
    cout << endl;

}
int main(){
    IOS;
    solve();
    //cout << solve() << endl;
    return 0;
}