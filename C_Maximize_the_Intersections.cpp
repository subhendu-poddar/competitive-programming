#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define pr pair<int,int>
#define setpr(x) fixed<<setprecision(10)<<x
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define For(i,a,n) for(int i=a;i<=n;i++)
#define rev(i,n,a) for(int i=n;i>=a;i--)
#define mod 1000000007
#define INF 1000000000000
#define max_heap priority_queue<int>
#define min_heap priority_queue<int,vv<int>,greater<int>>
int gcd(int x,int y) {return __gcd(x,y);}
int lcm(int x,int y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//
void solve() {
    int k,temp=1,sum,res,ans=0,n,x,y,ind;
    cin >> n >> k;
    vv<bool> vis(2*n+1, false);

    vv<int> adj(2*n+1,-1);

    FOR(i,0,k){
        cin >> x >> y;
        adj[x]=y;
        adj[y]=x;
    }

    For(i,1,2*n){
        if(adj[i]!=-1) continue;
        
        res=-1;
        For(j,i+1,2*n){
            if(adj[j]!=-1) continue;

            temp=0;
            FOR(l,i+1,j){

                if(adj[l]!=-1 && (adj[l]>j || adj[l]<i)){
                    temp++;
                }
            }

            if(res<temp){
                res=temp;
                ind=j;
            }
        }

        adj[i]=ind;
        adj[ind]=i;
    }

    For(i,1,2*n){
        if(vis[i]) continue;

        FOR(j,i+1,adj[i]){
            if(adj[j]<i || adj[j]>adj[i]) ans++;
        }
        vis[i]=true;
        vis[adj[i]]=true;
    }

    cout << ans << endl;

}
int main(){
    IOS;
    int t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        solve();
        //cout << solve() << endl;
    }
    return 0;
}