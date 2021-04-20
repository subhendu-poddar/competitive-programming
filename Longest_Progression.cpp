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
    ll k,temp,sum,res,ans=2,n;
    cin >> n;
    vv<ll> a;
    FOR(i,0,n){
        cin >> a[i];
    }

    vv<ll> left(n,2), right(n,2);
    
    FOR(i,2,n){
        if(a[i]-a[i-1]==a[i-1]-a[i-2]) left[i] = left[i-1]+1;
    }
    rev(i,n-3,0){
        if(a[i]-a[i+1]==a[i+1]-a[i+2]) right[i] = right[i+1]+1;
    }

    FOR(i,0,n){
        temp = 0;
        if(i>1 && a[i]-a[i-1]==a[i-1]-a[i-2]){
            temp += left[i];
        }
        if(i<n-2 && a[i]-a[i+1]==a[i+1]-a[i+2]){
            temp += right[i];
        }

        if(i==1){
            
        }


    }

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