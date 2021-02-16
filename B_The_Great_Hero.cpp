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
ll ceil(ll a, ll b){
    if(a%b==0) return a/b;
    return a/b+1;
}
bool fn(pair<ll,ll> a, pair<ll,ll> b){
    if(a.ff==b.ff) return a.ss<=b.ss;
    return a.ff<=b.ff;
}
string solve() {
    ll k,temp=0,sum=0,res,ans,n,a,b;
    cin>>a>>b>>n;
    vv<pair<ll,ll>> m(n);
    FOR(i,0,n){
        cin>>m[i].ff;
    }
    FOR(i,0,n){
        cin>>m[i].ss;
    }
    sort(m.begin(),m.end(),fn);
    
    sum=b;
    FOR(i,0,n){
        sum=sum-(m[i].ff*ceil(m[i].ss,a));
    }
    if(sum+m[n-1].ff>0) return "YES";
    return "NO";





}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        //solve();
        cout << solve() << endl;
    }
    return 0;
}