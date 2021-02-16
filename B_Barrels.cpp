#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define mod 1000000007
#define INF 1000000000000
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//


void solve() {
	ll k,temp,sum,res,ans,n;
    cin>>n>>k;
    vv<ll> a(n);
    FOR(i,0,n) cin>>a[i];
    sort(a.begin(),a.end(),greater<ll>());
    FOR(i,1,n){
        a[0]+=a[i];
        k--;
        if(k==0) break;
    }
    cout<<a[0]<<endl;
}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}