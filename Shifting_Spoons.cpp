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
#define max_heap priority_queue<ll>
#define min_heap priority_queue<ll,vv<ll>,greater<ll>>
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
typedef pair<ll,ll> pi;
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//


void solve() {
	ll k,temp,sum,res,ans,n;
    cin >> n;
    vv<ll> a(n);
    priority_queue<pi, vector<pi>, greater<pi> > h;
    FOR(i,0,n){
        cin >> a[i];
        if(i!=0){
            h.push({a[i],i+1});
        }
    }
    vv<pair<pair<ll,ll>,ll>> seq;
    while(!h.empty()){
        auto x = h.top();
        h.pop();
        if(x.ff>a[0]){
            cout << -1 << endl;
            return;
        }
        else{
            a[0]+=x.ff;
            seq.push_back({{x.ss,1},x.ff});
        }
    }
    cout << seq.size() << endl;
    FOR(i,0,seq.size()){
        cout << seq[i].ff.ff << ' ' << seq[i].ff.ss <<  ' ' << seq[i].ss << endl;
    }
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