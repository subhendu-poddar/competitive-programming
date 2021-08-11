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
    ll k,temp,sum,res,ans=0,n;
    ll a[3][3];
    FOR(i,0,3){
        if(i==1) {cin >> a[i][0] >> a[i][2];}
        else {cin >> a[i][0] >> a[i][1] >> a[i][2];}
    }
    temp = a[0][2]+a[2][2];
    if(temp%2==0 && a[1][2]==temp/2) ans++;

    temp = a[0][0]+a[2][0];
    if(temp%2==0 && a[1][0]==temp/2) ans++;

    temp = a[0][0]+a[0][2];
    if(temp%2==0 && a[0][1]==temp/2) ans++;
    
    temp = a[2][0]+a[2][2];
    if(temp%2==0 && a[2][1]==temp/2) ans++;

    map<ll,ll> mp;
    
    temp = a[0][0]+a[2][2] ;
    if(temp%2==0) mp[temp]++;

    temp = a[1][0]+a[1][2] ;
    if(temp%2==0) mp[temp]++;

    temp = a[0][2]+a[2][0] ;
    if(temp%2==0) mp[temp]++;

    temp = a[0][1]+a[2][1] ;
    if(temp%2==0) mp[temp]++;

    temp=0;
    for(auto x:mp){
        temp = max(temp,x.ss);
    }
    ans += temp;

    cout << ans << endl;
}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        cout << "Case #" << i << ": ";
        solve();
        //cout << solve() << endl;
    }
    return 0;
}