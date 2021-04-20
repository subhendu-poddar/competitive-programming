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
ll left(ll x, vv<ll>& d){
    FOR(i,x+1,d.size()){
        if(d[i]!=-1){
            return d[i];
        }
    }
    return -1;
}
ll right(ll x, vv<ll>& d){
    rev(i,x-1,0){
        if(d[i]!=-1){
            return d[i];
        }
    }
    return -1;
}
bool fn(pair<ll,ll> a, pair<ll,ll> b){
    return a.ff>b.ff;
}


void solve() {
    ll k,temp,sum,res,ans,n;
    cin>>n;
    vv<ll> a(n), d(n,-1);
    vv<pair<ll,ll>> v;
    FOR(i,0,n){
        cin>>a[i];
        v.pb({a[i],i});
    }
    sort(v.begin(),v.end(),fn);

    FOR(i,0,n){
        ll x=v[i].ss;
        ll l=left(x,d);
        ll r=right(x,d);
        d[x]=1+max(l,r);
    }
    
    FOR(i,0,n){
        cout<<d[i]<<' ';
    }
    cout<<endl;



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