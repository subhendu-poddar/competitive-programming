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

string solve() {
	ll k,temp,sum,res,ans,n;
    ll px, py;
    cin>>px>>py;
    string s;
    cin>>s;
    ll u=0, d=0, l=0, r=0;
    FOR(i,0,s.size()){
        if(s[i]=='U') u++;
        else if(s[i]=='D') d++;
        else if(s[i]=='L') l++;
        else r++;
    }
    //printf("%lld %lld %lld %lld\n", u,d,l,r);
    if(px>0 && r<px) return "NO";
    if(px<0 && -l>px) return "NO";
    if(py>0 && u<py) return "NO";
    if(py<0 && -d>py) return "NO";

    return "YES";
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