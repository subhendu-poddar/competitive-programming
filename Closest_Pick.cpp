#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define pr pair<ll,ll>
#define setpr(x) fixed<<setprecision(6)<<x
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
void solve() {
    ll temp,sum,ans,n;
    float k;
    cin >> n >> k;
    vv<ll> a(n), res, res2;
    FOR(i,0,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    FOR(i,1,n){
        res.pb((a[i]-a[i-1])/2);
        res2.pb(a[i]-a[i-1]-1);
    }
    res.pb(a[0]-1);
    res.pb(k-a[n-1]);

    sort(res.begin(), res.end(), greater<ll>());
    sort(res2.begin(), res2.end(), greater<ll>());

    if(res2.size()>0){
        ans= max(res[0]+res[1], res2[0]);
    }

    cout << ans/k << endl;


}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        cout << "Case #" << i << ": ";
        solve();
        //cout << solve() << endl;
    }
    return 0;
}