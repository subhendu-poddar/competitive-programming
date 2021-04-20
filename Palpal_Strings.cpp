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
string solve() {
    ll k,temp,sum,res,ans,n;
    string s;
    cin>>s;
    vv<ll> count(26,0);
    FOR(i,0,s.size()){
        count[s[i]-97]++;
    }
    ll cnt1=0, even=0;
    FOR(i,0,26){
        if(count[i]==1){
            cnt1++;
        }
        else if(count[i]>0 && count[i]%2==0){
            even+=(count[i]/2);
        }
        else if(count[i]>3 && count[i]%2==1){
            even+=(count[i]-3)/2;
        }
    }
    if(even>=cnt1) return "YES";
    return "NO";
}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        //solve();
        cout << solve() << endl;
    }
    return 0;
}