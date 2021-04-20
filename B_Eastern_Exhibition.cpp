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

ll dist(pair<ll,ll>& a, pair<ll,ll>& b){
    return abs(a.ff-b.ff)+abs(a.ss-b.ss);
}

ll solve() {
    ll k,temp,sum,res,ans=INT_MAX,n;
    cin>>n;
    vv<ll> x(n), y(n);
    FOR(i,0,n){
        cin>>x[i]>>y[i];
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    return (1+x[x.size()/2]-x[(x.size()-1)/2])*(1+y[y.size()/2]-y[(y.size()-1)/2]);

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