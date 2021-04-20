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
    ll k,temp,sum=0,res,ans,n;
    cin >> n;
    string a;
    cin >> a;
    // ll st=0, end=a.size()-1;
    // while(st<=end){
    //     if(a[st]=='T' && a[end]=='T'){
    //         st++;
    //         end--;
    //         sum++;
    //     }
    //     else if(a[st]=='M'){
    //         sum--;
    //         st++;
    //     }
    //     else if(a[end]=='M'){
    //         sum--;
    //         end--;
    //     }
    //     if(sum<0){
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    // if(sum!=0){
    //     cout << "NO" << endl;
    //     return;
    // }
    // cout << "YES" << endl;

    vv<ll> pre(n+1,0), suf(n+1,0);
    ll count=0;
    sum=0;

    FOR(i,0,n){
        if(a[i]=='T') count++;
        else sum++;
        if(count<sum) {
            cout << "NO" << endl;
            return;
        }
    }

    count=0;
    sum=0;
    rev(i,n-1,0){
        if(a[i]=='T') count++;
        else sum++;
        if(count<sum) {
            cout << "NO" << endl;
            return;
        }
    }
    
    count=0;
    FOR(i,0,n){
        if(a[i]=='T') count++;
        else count--;
    }
    if(count!=n/3){
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;




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