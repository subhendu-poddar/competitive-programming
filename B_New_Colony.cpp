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

ll solve() {
	ll k,temp,sum,res,ans,n;
    cin>>n>>k;
    vv<ll> a(n);
    FOR(i,0,n){
        cin>>a[i];
    }
    temp=k;

    while(temp>0){
        bool flag=false;
        FOR(i,0,n-1){
            if(a[i]<a[i+1]){
                if(i==0 || (i>0 && a[i-1]>=a[i+1])){
                    temp-=min(temp,a[i+1]-a[i]);
                    a[i]=a[i+1];
                }
                else{
                    temp-=min(temp,a[i-1]-a[i]+1);
                    a[i]=a[i-1]+1;
                }
                if(temp==0) return i+1;
                flag=true;
                break;
            }
        }
        if(!flag) return -1;
    }
    return -1;


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