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
    ll k,temp,sum,res,ans,n;
    string x,y;
    cin>>x;
    cin>>y;
    vv<vv<ll>> dp(y.size()+1,vv<ll>(x.size()+1));

    For(i,0,y.size()){
        For(j,0,x.size()){
            if(i==0){
                dp[i][j]=j;
            }
            else if(j==0){
                dp[i][j]=i;
            }
            else if(y[i-1]==x[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j]= 1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
            }
            //cout<<dp[i][j]<<' ';
        }
        //cout<<endl;
    }
    return dp[y.size()][x.size()];





}
int main(){
    IOS;
    //solve();
    cout << solve() << endl;
    return 0;
}