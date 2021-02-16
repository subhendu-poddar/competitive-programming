#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define pr(x) fixed<<setprecision(10)<<x
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n,a) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define INF 1000000000000
#define max_heap(type) priority_queue<type>
#define min_heap(type) priority_queue<type,vv<type>,greater<type>>
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//
vv<vv<ll>> tree(2000001,vv<ll>());
vv<vv<ll>> dp(2000001,vv<ll>(2,0));

void find(ll src, ll par){

    vv<ll> prefix, suffix, node;
    
    if(tree[src].size()==1 && tree[src][0]==par) return;

    for(auto child:tree[src]){
        if(child!=par){
            find(child,src);
        }
    }
    prefix.pb(0);
    for(auto child:tree[src]){
        if(child==par) continue;
        node.pb(child);
        prefix.pb(max(dp[child][0],dp[child][1]));
        suffix.pb(max(dp[child][0],dp[child][1]));
    }
    suffix.pb(0);
    FOR(i,1,prefix.size()){
        prefix[i]+=prefix[i-1];
    }
    rev(i,suffix.size()-2,0){
        suffix[i]+=suffix[i+1];
    }
    ll ans=0;
    dp[src][0]=prefix[prefix.size()-1];
    
    FOR(i,0,node.size()){
        ll child=node[i];
        ll temp = prefix[i]+suffix[i+1]+dp[child][0]+1;
        if(src==10){
            //cout << "           " << prefix[i]<<' '<<suffix[i]<<' '<<dp[child][0]<<endl;
        }
        dp[src][1]=max(dp[src][1],temp);
    }
    //cout << src << ":   " << dp[src][0] << ' ' << dp[src][1] << endl;

}


void solve() {
	ll k,temp,sum,res,ans,n,x,y;
    cin >> n;
    FOR(i,1,n){
        cin >> x >> y;
        tree[x].pb(y);
        tree[y].pb(x);
    }
    find(1,0);

    cout << max(dp[1][0],dp[1][1]) << endl;

}


int main()
{
	IOS;
	ll t;
	t=1;
	//cin >> t;
	For(i,1,t) {
		solve();
		//cout << solve() << endl;
	}

	return 0;
}