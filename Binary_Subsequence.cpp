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
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//

ll solve() {
	ll k,temp,sum,res,ans=INT_MAX,n, zero=0, one=0;
    cin >> n;
    string s;
    cin >> s;
    vv<ll> prefix(n+1,0);
    FOR(i,0,n){
        if(s[i]=='1'){
            prefix[i+1]=1;
        }
    }
    For(i,1,n){
        prefix[i]+=prefix[i-1];
    }
    For(i,0,n){
        one = prefix[i];
        zero = (n-i)-(prefix[n]-prefix[i]);
        ans=min(ans,one+zero);
        //cout << i << ": " << one << ' ' << zero << endl;
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