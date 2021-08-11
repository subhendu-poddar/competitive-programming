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
    ll k,temp=0,sum,res,ans=0,n,cnt=0;
    cin >> n;
    string s;
    cin >> s;
    FOR(i,0,n){
        if(s[i]=='*') cnt++;
    }
    FOR(i,0,n){
        if(s[i]=='*') temp++;
        if(temp==(cnt+1)/2) {
            k=i;
            break;
        }
    }
    cnt=0;
    rev(i,k-1,0){
        if(s[i]=='.') cnt++;
        else{
            ans+= cnt;
        }
    }
    cnt=0;
    FOR(i,k+1,n){
        if(s[i]=='.') cnt++;
        else{
            ans+= cnt;
        }
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