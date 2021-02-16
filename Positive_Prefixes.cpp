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
	ll k,temp,sum,res,ans,n,ind=1;
    cin >> n >> k;
    temp=n-k;
    vector<ll> a(n+1,0), pre(n+1,0);
    while(temp>0 && ind<=n){
        a[ind]=-ind;
        temp--;
        ind+=2;
    }
    ind = n-n%2;
    while(temp>0 && ind>0){
        a[ind]=-ind;
        temp--;
        ind-=2;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==0) a[i]=i;
    }
    for(int i=1;i<=n;i++) cout << a[i] << ' ';
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