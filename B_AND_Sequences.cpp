#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
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
ll fact(ll n){
    if(n==0) return 1;
    return (n*(fact(n-1)))%mod;
}

void solve() {
    ll k,temp,sum=((ll)1<<31)-1,res,ans,n;
    cin >> n;
    vv<ll> a(n);
    FOR(i,0,n) {
        cin >> a[i];
        sum &= a[i];
    }
    sort(a.begin(), a.end());
    if(a[0]!=a[1] || a[0] != sum){
        cout << 0 << endl;
        return;
    }
    temp = 1;
    while(a[temp]==a[0] && temp<n) temp++;

    cout << ((((temp*(temp-1))%mod)*(fact(n-2)))%mod) << endl;


}
int main(){
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