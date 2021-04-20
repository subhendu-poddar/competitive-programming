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
ll solve() {
    ll k,temp,sum,res,ans,n,end;
    cin>>n;
    vv<ll> a(n);
    FOR(i,0,n) cin>>a[i];
    vv<vv<ll>> dp(n,vv<ll>(n));

    For(len,1,n){
        For(st,0,n-len){
            end=st+len-1;
            if(len==1){
                dp[st][end]=a[st];
            }
            else if(len==2){
                dp[st][end]=max(a[st],a[end]);
            }
            else{
                dp[st][end]= max(
                    a[st] + min(dp[st+1][end-1], dp[st+2][end]), 
                    min(dp[st+1][end-1], dp[st][end-2]) + a[end]
                );
            }
        }
    }
    return dp[0][n-1];

}
int main(){
    IOS;
    //solve();
    cout << solve() << endl;
    return 0;
}