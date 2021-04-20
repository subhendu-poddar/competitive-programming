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
    scanf("%lld %lld", &n, &k);
    FOR(i,0,k-3){
        printf("1 ");
    }
    n-=(k-3);
    k=3;

    if(n%4==0){
        printf("%lld %lld %lld", n/4, n/4, n/2);
    }
    else if(n%2==0){
        printf("2 %lld %lld", n/2-1, n/2-1);
    }
    else{
        printf("1 %lld %lld", n/2, n/2);
    }
    printf("\n");

}
int main(){
    IOS;
    ll t;
    //t=1;
    scanf("%lld", &t);
    For(i,1,t) {
        solve();
        //cout << solve() << endl;
    }
    return 0;
}