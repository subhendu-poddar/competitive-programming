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
    cin >> n;
    vv<vv<ll>> a(n+1, vv<ll>(n+1));
    if(n==2) {
        cout << -1 << endl;
        return;
    }
    if(n%2==1){
        ans=1;
        ll mid;
        For(i,1,n){
            ll st=1, end=n;
            while(st!=end){
                a[i][st]= ans++;
                a[i][end]= ans++;
                st++;
                end--;
            }
            mid=st;
        }
        ll st=1, end=n;
        while(st!=end){
            a[st][mid]= ans++;
            a[end][mid]= ans++;
            st++;
            end--;
        }
        a[st][mid]= 1;
        a[1][1]= ans++;
        
    }
    else{
        ans=1;
        For(i,1,n){
            for(ll j=1;j<=n;j+=2){
                a[i][j]= ans++;
            }
        }
        For(i,1,n){
            for(ll j=2;j<=n;j+=2){
                a[i][j]= ans++;
            }
        }
    }

    For(i,1,n){
        For(j,1,n){
            cout << a[i][j] << ' ';
        }
        cout << endl;
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