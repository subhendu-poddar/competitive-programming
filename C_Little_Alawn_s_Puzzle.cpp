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
    ll k,temp,sum,res=0,ans=1,n;
    cin >> n;
    unordered_map<ll,ll> mp;
    vv<ll> a(n), b(n);

    FOR(i,0,n){
        cin >> a[i];

    }
    FOR(i,0,n){
        cin >> b[i];
        mp[a[i]]=b[i];
    }
    vv<bool> vis(n+1,false);

    For(i,1,n){
        if(vis[i]) continue;
        res++;
        temp=mp[i];
        vis[i]=true;

        while(temp!=i){
            vis[temp]=true;
            temp = mp[temp];
        }

    }
    

    while(res--){
        ans = (ans*2)%mod;
    }

    cout << ans << endl;


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