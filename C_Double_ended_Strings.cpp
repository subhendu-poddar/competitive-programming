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

bool check(string a, string b){
    if(a.size()!=b.size()) return false;
    FOR(i,0,a.size()){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

void solve() {
    ll k,temp,sum,res,ans=INT_MAX,n;
    string a,b;
    cin >> a >> b;
    ll al=a.size(), bl=b.size();

    FOR(i1,0,al){
        FOR(i2,i1,al){
            FOR(j1,0,bl){
                FOR(j2,j1,bl){
                    if(i2-i1 == j2-j1){
                        if(check(a.substr(i1,i2-i1+1), b.substr(j1,j2-j1+1))){
                            ans = min(ans, i1+j1+al+bl-i2-j2-2);
                        }
                    }
                }
            }
        }
    }
    if(ans==INT_MAX){
        ans=al+bl;
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