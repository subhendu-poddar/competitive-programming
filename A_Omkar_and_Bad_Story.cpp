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
    ll k,temp,sum,res,ans,n;
    cin >> n;
    vv<ll> a(n);
    unordered_map<ll,bool> mp;
    FOR(i,0,n){
        cin >> a[i];
        mp[a[i]]=true;
    }
    FOR(i,0,n){
        if(a[i]<0){
            cout << "No" << endl;
            return;
        }
    }
    ll x,y;
    sort(a.begin(), a.end());
    FOR(i,1,n){
        FOR(j,0,i){
            x = a[i];
            y = a[j];
            while(1){
                temp = abs(x-y);
                if(mp[temp]) break;
                mp[temp]=true;
                y = min(x,y);
                x = temp;
            }
        }
    }
    cout << "Yes" << endl << mp.size() << endl;
    for(auto v:mp){
        cout << v.ff << ' ';
    }
    cout << endl;
}
int main(){
    IOS;
    ll t;
    cin >> t;
    while(t--)
        solve();
    //cout << solve() << endl;
    return 0;
}