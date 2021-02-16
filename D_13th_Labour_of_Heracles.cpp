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
bool comparefn(pair<ll,ll> a, pair<ll,ll> b){
    if(a.ff!=b.ff) return a.ff>b.ff;
    return a.ss>b.ss;
}

void solve() {
	ll k,temp,sum,res,ans=0,n,x,y;
    cin >> n;
    vv<ll> a(n+1);
    vv<ll> deg(n+1,0);
    For(i,1,n){
        cin >> a[i];
        ans+=a[i];
    }
    For(i,1,n-1){
        cin >> x >> y;
        deg[x]++;
        deg[y]++;
    }
    priority_queue<pair<ll,ll>> h;
    For(i,1,n){
        if(deg[i]>1){
            h.push({a[i],deg[i]});
        }
    }
    cout << ans << ' ';
    For(i,2,n-1){
        auto x = h.top();
        h.pop();
        ans += x.ff;
        if(x.ss>2){
            h.push({x.ff,x.ss-1});
        }
        cout << ans << ' ';
    }
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
		//cout << solve() << endl;
	}

	return 0;
}