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
    ll k,temp,sum,res,ans=0,n;
    cin >> n >> k;
    string s;
    cin >> s;
    // s = "."+s;

    // vv<ll> dp(n+1,INT_MAX);
    // dp[0]=0;

    // For(i,1,n){
    //     if(s[i]=='*'){
    //         if(i<=k){
    //             dp[i] = dp[i-1]+1;
    //         }
    //         else{
    //             For(j,i-k,i-1){
    //                 dp[i] = min(dp[i], 1+dp[j]);
    //             }
    //         }
    //     }
    //     else{
    //         dp[i] = dp[i-1];
    //     }
    // }

    temp=0;
    while(s[temp]!='*') temp++;
    ans++;

    while(1){
        res = temp;
        temp += k;
        if(temp>n){
            temp -= (k-1);
            break;
        }
        while(s[temp]!='*'){
            temp--;
        }
        if(temp==res){
            temp++;
            break;
        }
        else{
            ans++;
        }
    }

    while(temp<=n){
        if(s[temp]=='*'){
            ans++;
            break;
        }
        temp++;
    }



    cout << ans << endl;


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