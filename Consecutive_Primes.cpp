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

bool isPrime(ll x){
    if(x%2==0 && x!=2) return false;
    ll k = sqrt(x);
    for(ll i=3;i<=k;i+=2){
        if(x%i==0) return false;
    }
    return true;
}

ll dec(ll x){
    if(x==3) return 2;
    return x-2;
}

void solve() {
    ll k,temp,sum,res,ans,n;
    cin >> n;

    res = sqrt(2*n);
    if(res%2==0) res--;

    while(!isPrime(res)) res = dec(res);

    temp = dec(res);
    
    while(1){
        if(isPrime(temp)) {
            // cout << res << temp << endl;
            if(temp*res<=n){
                cout << temp*res << endl;
                return;
            }
            else{
                res = temp;
            }
        }
        temp = dec(temp);
    }




}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        // solve();
        cout <<"Case #" << i << ": ";
        solve();
    }
    return 0;
}