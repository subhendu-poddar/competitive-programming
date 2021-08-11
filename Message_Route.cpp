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

vv<vv<int>> adj(200001, vv<int>());
stack<int> st;
int n,m;

void find(int end, stack<int> s, vv<bool> vis){
    s.push(end);

    if(end==1){
        if(st.empty() || st.size()>s.size()){
            st=s;
        }
    }
    FOR(i,0,adj[end].size()){
        int k = adj[end][i];

        if(!vis[k]){
            vis[k]=true;
            find(k, s, vis);
            vis[k]=false;
        }
    }
}



void solve() {
    cin >> n >> m;
    
    int x,y;
    FOR(i,0,m){
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    int ans=0;

    stack<int> s;

    vv<bool> vis(n+1, false);
    vis[n]=true;

    find(n,s,vis);

    if(st.empty()){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        cout << st.size() << endl;
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }


}
int main(){
    IOS;
    solve();
    //cout << solve() << endl;
    return 0;
}