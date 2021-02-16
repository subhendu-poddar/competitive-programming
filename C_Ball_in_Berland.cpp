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

ll solve() {
	ll k,temp,sum,res,ans=0,n,x,y;
    ll a,b;
    cin >> a >> b >> k;
    vv<pair<ll,ll>> v(k);
    FOR(i,0,k){
        cin >> v[i].ff;
    }
    FOR(i,0,k){
        cin >> v[i].ss;
    }
    map<ll,ll> boy, girl;
    map<pair<ll,ll>,ll> p;

    boy[v[0].ff]++;
    girl[v[0].ss]++;
    p[{v[0].ff,v[0].ss}]++;

    FOR(i,1,k){
        x=v[i].ff;
        y=v[i].ss;
        temp = (i-boy[x]-girl[y]+p[{x,y}]);
        ans += temp;
        boy[x]++;
        girl[y]++;
        p[{x,y}]++;
    }
    return ans;



}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		//solve();
		cout << solve() << endl;
	}

	return 0;
}