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
    cin>>n;
    temp=n;
    vector<pair<ll,ll>> v;
    if(temp>2){
        v.pb({temp-2,temp});
        v.pb({temp-1,temp-1});
        temp--;
    }
    while(temp>2){
        v.pb({temp-2,temp});
        temp--;
    }
    cout<<2<<endl;
    FOR(i,0,v.size()){
        cout<<v[i].ff<<' '<<v[i].ss<<endl;
    }
    if(n==2){
        cout<<1<<' '<<2<<endl;
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
	}

	return 0;
}