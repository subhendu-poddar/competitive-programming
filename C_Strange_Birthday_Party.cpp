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
	ll temp=1,sum,res,ans=0,n,m;
    cin >> n >> m;
    vv<ll> k(n+1), c(m+1);
    max_heap(ll) h;

    For(i,1,n){
        cin >> k[i];
    }
    For(i,1,m){
        cin >> c[i];
    }
    For(i,1,n){
        ans += c[k[i]];
        h.push(c[k[i]]);
    }
    while(temp<=m){
        //cout << ans << endl;
        ll x = h.top();
        h.pop();
        if(c[temp]<x){
            ans = ans-x+c[temp];
        }
        temp++;
        if(h.size()==0) break;
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