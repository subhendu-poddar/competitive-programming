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

string solve() {
	ll k,temp,sum,res,ans,n,x,cnt1,cnt2;
    cin >> n >> k;
    cout << "1" << endl;
    while(k>0 && k%2==0){
        k/=2;
    }
    vv<ll> a(n);
    FOR(i,0,n){
        cin >> x;
        while(x>0 && x%2==0){
            x/=2;
        }
        a[i]=x;
    }
    FOR(i,0,n){
        x=a[i];
        if(x%k!=0){
            return "NO";
        }
    }
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