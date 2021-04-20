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
    ll k,temp,sum,res,ans=0,n;
    cin>>n;
    ll c0=0, c1=0,c2=0;
    FOR(i,0,n){
        cin>>temp;
        if(temp%3==0) c0++;
        else if(temp%3==1) c1++;
        else c2++;
    }
    temp=min(c0,min(c1,c2));
    c0-=temp;
    c1-=temp;
    c2-=temp;


    sum=c0+c1+c2;
    //cout<<c0<<' '<<c1<<' '<<c2<<endl;
    sum/=3;

    if(c2>sum){
        ans+=c2-sum;
        c0+=c2-sum;
        c2=sum;
    }
    if(c0>sum){
        ans+=c0-sum;
        c1+=c0-sum;
        c0=sum;
    }
    if(c1>sum){
        ans+=c1-sum;
        c2+=c1-sum;
        c1=sum;
    }
    if(c2>sum){
        ans+=c2-sum;
        c0+=c2-sum;
        c2=sum;
    }
    if(c0>sum){
        ans+=c0-sum;
        c1+=c0-sum;
        c0=sum;
    }
    if(c1>sum){
        ans+=c1-sum;
        c2+=c1-sum;
        c1=sum;
    }
    return ans;



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