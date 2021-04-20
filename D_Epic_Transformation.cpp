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
    ll k=0,sum=0,res=-1,ans=0,n;
    cin >> n;
    vv<ll> a(n), req;
    map<ll,ll> mp;
    FOR(i,0,n){
        cin >> a[i];
        mp[a[i]]++;
    }
    
    for(auto x:mp){
        req.pb(x.ss);
    }

    sum=0;
    sort(req.begin(), req.end());

    FOR(i,0,req.size()){
        sum += req[i];
        res=max(res,req[i]);
    }

    if(res>sum-res){
        ans = 2*res-sum;
    }
    // cout << "   " << ans << endl;

    k=n%2;

    if(k==1 && ans==0){
        ans=1;
    }
    cout << ans << endl;


    
    // ll st=0, end=req.size()-1, x, y;

    // while(st<end){
    //     x = min(req[st], req[end]);

    //     req[st]-= x;
    //     req[end]-= x;

    //     if(req[st]==0) st++;
    //     if(req[end]==0) end--;
    // }
    // FOR(i,0,req.size()){
    //     sum += req[i];
    // }

    // cout << sum << endl;


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