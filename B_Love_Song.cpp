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
    ll k,temp,sum,res,ans,n,q,x,y;
    cin >> n >> q;
    string s;
    cin >> s;
    s = '0'+s;
    vv<vv<ll>> cnt(26,vv<ll> (n+1,0));

    For(i,1,n){
        cnt[s[i]-97][i]++;
    }

    For(i,0,25){
        For(j,1,n){
            cnt[i][j] += cnt[i][j-1];
        }
    }
    // FOR(i,0,3){
    //     For(j,1,n){
    //         cout << cnt[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    while(q--){
        cin >> x >> y;
        ans = 0;
        FOR(i,0,26){
            ans += (cnt[i][y]-cnt[i][x-1])*(i+1);
        }
        cout << ans << endl;
    }



}
int main(){
    IOS;
    ll t;
    solve();
    // //t=1;
    // cin >> t;
    // For(i,1,t) {
    //     solve();
    //     //cout << solve() << endl;
    // }
    return 0;
}