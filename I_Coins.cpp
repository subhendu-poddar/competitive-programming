#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define pr pair<int,int>
#define setpr(x) fixed<<setprecision(10)<<x
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define For(i,a,n) for(int i=a;i<=n;i++)
#define rev(i,n,a) for(int i=n;i>=a;i--)
#define mod 1000000007
#define INF 1000000000000
#define max_heap priority_queue<int>
#define min_heap priority_queue<int,vv<int>,greater<int>>
int gcd(int x,int y) {return __gcd(x,y);}
int lcm(int x,int y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//
void solve() {
    ll k,temp,sum,res,n;
    cin >> n;
    vv<double> p(n);
    FOR(i,0,n){
        cin >> p[i];
    }

    double dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    
    dp[0][0] = 1-p[0];
    dp[0][1] = p[0];


    FOR(i,1,n){
        For(j,0,n){
            // heads
            if(j>0) dp[i][j] += p[i]*dp[i-1][j-1];
            // tails
            dp[i][j] += (1-p[i])*dp[i-1][j];
        }
    }

    double ans=0;

    For(i,(n+1)/2,n){
        ans += dp[n-1][i];
    }

    cout << setpr(ans) << endl;



}
int main(){
    IOS;
    solve();
    //cout << solve() << endl;
    return 0;
}