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
    ll k,temp,x,sum,res,ans,n;
    cin >> n >> k;
    vv<ll> count(10,0);

    while(n>0){
        count[n%10]++;
        n/=10;
    }
    // For(i,0,9) cout << count[i] << ' ';
    // cout << endl;

    ll maxv;
    while(k>0){
        maxv=-1;
        rev(i,9,0){
            if(count[i]>0){
                maxv = i;
                break;
            }
        }
        x = min(k,10-maxv);
        k-=x;
        temp = count[maxv];
        
        rev(i,9,0){
            if(i>=x) count[i] = count[i-x];
            else count[i]=0;
        }
        if(maxv+x==10){
            count[0] += temp;
            count[1] += temp;
        }
        


    }

    sum = 0;
    For(i,0,9){
        sum += count[i];
        sum %= mod;
    }
    cout << sum << endl;



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