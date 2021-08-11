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
    ll k,temp,sum,res=0,ans=0,n;
    cin >> n;
    vv<ll> a(n+2);
    a[0]=a[n+1]=0;
    For(i,1,n){
        cin >> a[i];
    }
    For(i,1,n){
        if(a[i]>a[i-1]) ans+=a[i]-a[i-1];
        if(a[i]>a[i+1]) ans+=a[i]-a[i+1];
    }

    For(i,1,n){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            temp = a[i]-max(a[i-1],a[i+1]);
            a[i]-=temp;
            res+=temp;
        }
    }

    cout << ans-res << endl;



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