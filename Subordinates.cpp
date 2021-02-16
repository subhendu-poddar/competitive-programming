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
vv<ll> ans(2000001,0);
void find(ll src){
    if(tree[src].size()==0){
        return;
    }
    for(ll child:tree[src]){
        find(child);
        ans[src]+=1+ans[child];
    }
}
void solve() {
	ll k,temp,sum,res,n,x;
    cin >> n;
    FOR(i,1,n){
        cin >> x;
        tree[x].pb(i+1);
    }
    find(1);
    For(i,1,n){
        cout << ans[i] << ' ';
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