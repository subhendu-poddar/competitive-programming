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

/* Accepted */
void solve() {
    ll k,temp=0,sum=0,res,ans,n;
    cin >> n;
    vv<ll> b(n+2);
    unordered_map<ll,ll> count;

    FOR(i,0,n+2){
        cin >> b[i];
        sum += b[i];
    }
    sort(b.begin(), b.end());
    
    FOR(i,0,n+1){
        if(b[n+1] == sum-b[n+1]-b[i]){
            FOR(j,0,n+1){
                if(j!=i) cout << b[j] << ' ';
            }
            cout << endl;
            return;
        }
    }

    if(b[n] == sum-b[n+1]-b[n]){
        FOR(j,0,n) cout << b[j] << ' ';
        cout << endl;
        return;
    }
    cout << -1 << endl;
    return;


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