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
    ll k,temp,sum,res,ans,n;
    string s,gd;
    cin >> s >> gd >> k;
    n=s.size();
    s = '0'+s;
    vv<ll> dp(n+1,0);

    For(i,1,n){
        temp = s[i]-'a';
        if(gd[temp]=='1'){
            dp[i]=1;
        }
        dp[i]+=dp[i-1];
    }

    For(len,1,n){
        FOR(i,0,n-len+1){
            j=i+len-1;
            





        }
    }



}
int main(){
    IOS;
    solve();
    //cout << solve() << endl;
    return 0;
}