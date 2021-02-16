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


string solve() {
	ll k=0,temp,sum,res,ans,n,x=0,y=0;
    cin >> n;
    vv<ll> a(n), odd, even;
    FOR(i,0,n){
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<ll>());

    for(ll i=0;i<n;i+=2){
       if(a[i]%2==0) x+=a[i];
    }
    for(ll i=1;i<n;i+=2){
        if(a[i]%2==1) y+=a[i];
    }
    if(x==y) return "Tie";
    if(x>y) return "Alice";
    return "Bob";

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