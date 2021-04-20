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
#define INF 100000000000000
#define max_heap priority_queue<ll>
#define min_heap priority_queue<ll,vv<ll>,greater<ll>>
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//
// bool fn(pair<ll,ll>& a, pair<ll,ll>& b){
//     return a.ff>b.ff;
// }

void solve() {
    ll k,temp=0,x,sum,res,ans,n;
    cin >> n;
    // map<ll,ll> mp;
    // FOR(i,0,n){
    //     cin >> x;
    //     mp[x]++;
    // }
    // vv<pair<ll,ll>> a;
    // for(auto m:mp){
    //     a.pb(m);
    // }
    

    // FOR(i,0,a.size()){
    //     cout << a[i].ff << ' ' << a[i].ss << ' ';
    // }
    // cout << endl;

    // ans=0;
    // vv<ll> pre(a.size()+1,0);
    // FOR(i,1,a.size()){
    //     ans += (a[i].ff-a[0].ff)*(a[i].ss);
    //     // pre[i] = (a[i].ff-a[0].ff)*(a[i].ss);
    // }
    // rev(i,pre.size(),0){
    //     pre[i] += pre[i+1];
    // }

    vv<ll> a(n);
    FOR(i,0,n){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    // FOR(i,0,n) cout << a[i] << ' ';
    // cout << endl;

    vv<vv<ll>> dp(n, vv<ll> (n));

    ll end;

    For(len,1,n){
        For(st,0,n-len){
            end = st+len-1;
            if(len==1) dp[st][end]=0;
            else dp[st][end] = a[end]-a[st] + min(dp[st+1][end], dp[st][end-1]);
        }
    }
    // FOR(i,0,n){
    //     FOR(j,i,n) cout << dp[i][j] << ' ';
    //     cout << endl;
    // }

    // ans = INF;

    // FOR(i,0,a.size()){
    //     temp = 0;
    //     rev(j,i-1,0){
    //         temp += (a[i].ff-a[j].ff)*(a[j].ss);
    //     }
    //     FOR(j,i+1,a.size()){
    //         temp += (a[j].ff-a[0].ff)*(a[j].ss);
    //     }
    //     cout << temp << ' ';

    //     ans = min(ans, temp);
    // }
    // cout << endl;
    
    // sort(a.begin(), a.end(),fn);
    
    // // FOR(i,0,a.size()) cout << a[i].ff << ' ';
    // // cout << endl;

    // FOR(i,0,a.size()){
    //     temp = 0;
    //     rev(j,i-1,0){
    //         temp += (a[j].ff-a[i].ff)*(a[j].ss);
    //     }
    //     FOR(j,i+1,a.size()){
    //         temp += (a[0].ff-a[j].ff)*(a[j].ss);
    //     }
    //     cout << temp << ' ';

    //     ans = min(ans, temp);
    // }    
    // cout << endl;


    cout << dp[0][n-1] << endl;

    // cout << min(10000000000000001, 10000000000000090) << endl;






}
int main(){
    IOS;
    // ll t;
    // t=1;
    // //cin >> t;
    // For(i,1,t) {
    //     solve();
    //     //cout << solve() << endl;
    // }
    solve();
    return 0;
}