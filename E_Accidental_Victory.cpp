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
bool fn(pair<ll,ll> a, pair<ll,ll> b){
    return a.ff<=b.ff;
}
void solve() {
    ll k,temp,sum,res,n;
    cin>>n;
    vv<ll> pre(n,0);
    vv<pair<ll,ll>> a;
    FOR(i,0,n){
        cin>>k;
        a.pb({k,i+1});
    }
    sort(a.begin(),a.end(),fn);
    
    FOR(i,0,n){
        pre[i]=a[i].ff;
        if(i>0) pre[i]+=pre[i-1];
    }
    vv<ll> ans;
    rev(i,n-1,0){
        if(i==n-1){
            ans.pb(a[i].ss);
        }
        else{
            if(pre[i]>=a[i+1].ff){
                ans.pb(a[i].ss);
            }
            else{
                break;
            }
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    FOR(i,0,ans.size()){
        cout<<ans[i]<<' ';
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