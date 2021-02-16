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
	ll k,temp,sum,res,ans,n;
    cin >> n;
    vv<ll> a(n+1,0);
    For(i,1,n){
        cin >> a[i];
        a[i]+=a[i-1];
    }
    ans=1;
    For(i,1,n-1){
        temp=a[i];
        res=1;
        k=i;
        ll j=i+1;
        while(j<=n){
            sum=a[j]-a[k];
            if(sum==temp){
                res++;
                k=j;
                j++;
            }
            else if(sum<temp){
                j++;
            }
            else{
                break;
            }
        }
        //cout << sum << ' ';
        if(sum==temp){
            return n-res;
        }
    }
    return n-1;

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