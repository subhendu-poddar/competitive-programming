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
    ll k,temp,sum,res,ans,n,x=-1, y=-1;
    cin >> n >> sum;
    vv<ll> a(n);
    map<ll,vector<ll>> mp;

    FOR(i,0,n){
        cin >> a[i];
        mp[a[i]].pb(i+1);
    }
    
    FOR(i,0,n){
        temp = sum-a[i];
        if(mp[temp].size()) {
            if(mp[temp].size()==1 && mp[temp][0]!=i+1){
                cout << i+1 << " " << mp[temp][0] << endl;
                return;
            }
            for(ll val:mp[temp]){
                if(val!= i+1){
                    cout << i+1 << " " << val << endl;
                    return;
                }
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;

}
int main(){
    IOS;
    // ll t;
    // //t=1;
    // cin >> t;
    // For(i,1,t) {
        solve();
    //     //cout << solve() << endl;
    // }
    return 0;
}