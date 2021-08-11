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
    ll k,temp,sum,res,ans,n,W;
    cin >> n >> W;
    vv<ll> w(n), v(n);
    FOR(i,0,n){
        cin >> w[i] >> v[i];
    }
    vv<vv<ll>> dp(W+1, vv<ll>(n+1,0));

    For(i,1,W){
        For(j,1,n){
            if(i>=w[j-1]){
                dp[i][j] = v[j-1]+dp[i-w[j-1]][j-1];
            }
            dp[i][j] = max(dp[i][j], dp[i][j-1]);

            // cout << dp[i][j] << ' ';
        }
        // cout << endl;
    }
    cout << dp[W][n] << endl;
}

int main(){
    IOS;
    ll t;
    //t=1;
    // cin >> t;
    // For(i,1,t) {
        solve();
    //     //cout << solve() << endl;
    // }
    return 0;
}