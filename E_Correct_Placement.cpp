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

bool comparefn(pair<pair<ll,ll>,ll> &a, pair<pair<ll,ll>,ll> &b){
    if(a.ff.ff==b.ff.ff) return a.ff.ss>b.ff.ss;
    return a.ff.ff<b.ff.ff;
}

void solve() {
	ll k,temp,sum,res,n,x,y;
    cin >> n;
    vv<pair<pair<ll,ll>,ll>> a;
    vv<ll> ans(n,-1);
    FOR(i,0,n){
        cin >> x >> y;
        /*
        if(x>y){
            swap(x,y);
        }
        */
        a.pb({{x,-y},i});
        a.pb({{y,-x},i});
    }
    sort(a.begin(), a.end());
    
    
    ll minh = INT_MAX, element = -1;

    FOR(i,0,n){
        ll w = a[i].ff.ff;
        ll h = a[i].ff.ss;
        ll ind = a[i].ss;

        if(h>minh){
            ans[ind] = element;
        }
        else if(h<minh){
            minh = h;
            element = ind;
        }



    }






    FOR(i,0,n){
        k = ans[i]==-1?-1:ans[i]+1;
        cout << k << ' ';
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