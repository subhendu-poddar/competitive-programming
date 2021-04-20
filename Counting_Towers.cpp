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

vv<ll> power(2000001,1);
void find_power(){
    For(i,1,2000000){
        power[i] = (power[i-1]*2)%mod;
    }
}

vv<ll> dp(1000001,0);
void find_dp(){
    dp[1]=2;
    For(i,2,2000){
        For(j,1,i-1){
            dp[i]+=(dp[j]*2+power[i-j]*2)%mod;
        }
    }
}

void solve() {
    ll k,temp,sum,res,ans,n;
    cin>>n;
    cout<<dp[n]<<endl;


}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    find_power();
    find_dp();
    For(i,1,t) {
        solve();
        //cout << solve() << endl;
    }
    return 0;
}