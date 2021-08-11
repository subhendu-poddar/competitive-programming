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
void solve() {
    ll k,temp,sum,res,ans,n;
    cin >> n;
    vv<vv<ll>> a(n, vv<ll> (3)), dp(n, vv<ll>(3,0));
    FOR(i,0,n){
        FOR(j,0,3){
            cin >> a[i][j];
            if(i==0)
                dp[i][j]=a[i][j];
        }
    }
    FOR(i,1,n){
        FOR(j1,0,3){
            FOR(j2,0,3){
                if(j1==j2) continue;
                dp[i][j1] = max(dp[i][j1], dp[i-1][j2]);
            }
            dp[i][j1]+=a[i][j1];
        }
    }

    cout << max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2])) << endl;



}
int main(){
    IOS;
    ll t;
    // //t=1;
    // cin >> t;
    // For(i,1,t) {
        solve();
    //     //cout << solve() << endl;
    // }
    return 0;
}