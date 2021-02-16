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
ll N=2000001,n;
vv<vv<ll>> tree(N);
vv<ll> subtreesum(N,0), totalsum(N,0), nodes(N,1);

void count_nodes(ll src, ll par){
    for(ll child:tree[src]){
        if(child!=par){
            count_nodes(child,src);
            nodes[src]+=nodes[child];
        }
    }
}
void find_subtreesum(ll src, ll par){
    for(ll child:tree[src]){
        if(child!=par){
            find_subtreesum(child,src);
            subtreesum[src]+=nodes[child]+subtreesum[child];
        }
    }
}
void find_totalsum(ll src, ll par){
    totalsum[src]=totalsum[par]+n-2*nodes[src];
    for(ll child:tree[src]){
        if(child!=par){
            find_totalsum(child,src);
        }
    }
}

void solve() {
	ll k,temp,sum,res,ans,x,y;
    cin>>n;
    FOR(i,1,n){
        cin>>x>>y;
        tree[x].pb(y);
        tree[y].pb(x);
    }
    count_nodes(1,0);
    find_subtreesum(1,0);
    totalsum[0]=subtreesum[1]+n;
    find_totalsum(1,0);
    For(i,1,n){
        cout << totalsum[i] << ' ';
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