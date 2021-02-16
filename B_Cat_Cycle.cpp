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
ll solve() {
    ll k,temp,sum,res,ans,n;
    cin>>n>>k;
    if(n%2==0){
        return k%n==0?n:k%n;
    }
    k%=(n*(n-1)/2);
    if(k==0){
        k=n*(n-1)/2;
    }
    temp=k/n;
    k=k%n;

    ans=2*temp+k;
    if(k==0){
        ans= ans%n;
        return ans==0?n:ans;
    }

    ll hits=temp*2;

    ll pos1=(n+1)/2-temp,  pos2=n-temp;
    //cout << pos1 << ' ' << pos2 << endl;
    if(k<pos1){
        ans=ans%n;
        return ans==0?n:ans;
    }
    else if(k<pos2){
        ans=(ans+1)%n;
        return ans==0?n:ans;
    }
    else{
        ans=(ans+2)%n;
        return ans==0?n:ans;
    }
    return ans==0?n:ans;
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