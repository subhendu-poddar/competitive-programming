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


ll solve() {
	ll k,temp,sum,res,ans,n,d;
    cin >> n >> d;
    vector<ll> a(n);
    ll t1=0, t2=0;
    FOR(i,0,n){
        cin>>a[i];
        if(a[i]>=80 || a[i]<=9) t1++;
        else t2++;
    }
    return (t1%d==0?(t1/d):(t1/d+1)) + (t2%d==0?(t2/d):(t2/d)+1);



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