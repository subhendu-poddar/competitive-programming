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
int find(vv<int>& h, vv<bool>& selected, int low, int high, int x){
    int mid = (low+high)/2;

}

void solve() {
    ll k,temp,sum,res,ans,n;
    cin >> n >> k;
    vv<int> h(n), t(k);
    FOR(i,0,n) cin >> h[i];
    FOR(i,0,k) cin >> t[i];

    sort(h.begin(), h.end());
    bool selected(n, false);

    FOR(i,0,k){
        ans=-1;
        int low=0, high=n-1;
        
    }



}
int main(){
    IOS;
    ll t;
    // //t=1;
    // cin >> t;
    // For(i,1,t) {
        solve();
    //     //cout << solve() << endl;
    // }
    return 0;
}