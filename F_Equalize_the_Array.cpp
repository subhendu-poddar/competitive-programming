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
ll solve() {
    ll k,temp,sum,res,ans=INT_MAX,n;
    cin>>n;
    map<ll,ll> mp;
    FOR(i,0,n){
        cin>>k;
        mp[k]++;
    }
    vv<ll> d;
    for(auto x:mp){
        d.push_back(x.ss);
    }
    sort(d.begin(),d.end());
    n=d.size();
    
    vv<ll> pre(n,0), suf(n,0);

    FOR(i,0,n){
        pre[i]=d[i];
        suf[i]=d[i];
        if(i>0){
            pre[i]+=pre[i-1];
        }
    }
    rev(i,n-2,0){
        suf[i]+=suf[i+1];
    }

    if(n==1) return 0;
    if(n>1) ans=min(ans,pre[n-2]);
    //cout<<0 << ' ' <<ans<<endl;

    FOR(i,1,n-1){
        ans=min(ans,pre[i-1]+suf[i+1]-d[i]*(n-1-i));
        //cout<<i << ' ' <<pre[i-1]+suf[i+1]-d[i]*(n-1-i)<<endl;
    }
    if(n>1) ans=min(ans,suf[1]-d[0]*(n-1));
    //cout<<n-1 << ' ' <<suf[1]-d[0]*(n-1)<<endl;
    return ans;


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