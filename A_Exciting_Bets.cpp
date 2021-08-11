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
    ll k,temp,sum,res,ans,n;
    ll x,y;
    cin >> x >> y;

    if(x>y){
        swap(x,y);
    }

    if(x==y) {
        ans=0;
        temp=0;
    }
    else if(x%2==y%2){
        if(2*x<y){
            temp = y-2*x;
            ans = x+temp;
        }
        else{
            temp = 2*x-y;
            ans = x-temp;
        }
    }
    else {
        if(2*y>3*x){
            temp = 2*y-3*x;
            ans = (x+temp)/2;
        }
        else{
            temp = 3*x-2*y;
            ans = (x - temp)/2;
        }
    }


    cout << ans << ' ' << temp << endl;

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