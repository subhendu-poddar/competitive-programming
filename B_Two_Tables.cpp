#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define pr pair<ll,ll>
#define setpr(x) fixed<<setprecision(9)<<x
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
    float k,temp,sum,res,ans=INT_MAX,n;
    float W,H,x1,x2,y1,y2,w2,h2;
    cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w2 >> h2;

    float w1=x2-x1, h1=y2-y1;

    if(w1+w2>W && h1+h2>H) {
        cout << -1 << endl;
        return;
    }

    if(x1>=w2 || x2+w2<=W) ans=0;
    else if(y1>=h2 || y2+h2<=H) ans=0;
    else if(w1+w2<=W){
        ans=min(ans, w2-x1);
        ans=min(ans, w2-(W-x2));
    }
    else if(h1+h2<=H){
        ans=min(ans, h2-y1);
        ans=min(ans, h2-(H-y2));
    }
    cout << setpr(ans) << endl;

}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        solve();
        // cout << solve() << endl;
    }
    return 0;
}