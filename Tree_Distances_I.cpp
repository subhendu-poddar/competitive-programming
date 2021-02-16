#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
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
vv<vv<ll>> tree(2000001);
vv<ll> depth(2000001), dist(2000001);

void find_depth(ll src, ll par){
    ll deep=0;
    for(ll child:tree[src]){
        if(child!=par){
            find_depth(child,src);
            deep=max(deep,1+depth[child]);
        }
    }
    depth[src]=deep;
}
void find_dist(ll src, ll par, ll par_ans){
    //cout << src << ' ' << par << ' ' << par_ans << endl;
    vector<ll> prefix, suffix;
    prefix.pb(-1);
    for(ll child:tree[src]){
        if(child!=par){
            prefix.pb(depth[child]);
            suffix.pb(depth[child]);
        }        
    }
    suffix.pb(-1);
    FOR(i,1,prefix.size()){
        prefix[i]=max(prefix[i],prefix[i-1]);
    }
    rev(i,suffix.size()-2,0){
        suffix[i]=max(suffix[i],suffix[i+1]);
    }
    ll count=0;
    for(ll child:tree[src]){
        if(child!=par){
            ll partial_ans=1+max(par_ans, max(prefix[count], suffix[count+1]) );
            find_dist(child,src,partial_ans);
            count++;
        }
    }


    dist[src]=max(depth[src], 1+par_ans);
}

void solve() {
	ll k,temp,sum,res,n,x,y;
    cin >> n;
    FOR(i,1,n){
        cin >> x >> y;
        tree[x].pb(y);
        tree[y].pb(x);
    }
    find_depth(1,0);
    dist[0]=-1;
    find_dist(1,0,-1);  
    For(i,1,n){
        cout << dist[i] << ' ';
    }
    cout << endl;
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