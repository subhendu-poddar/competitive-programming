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
    cin>>n>>k;
    vv<ll> a(n);
    ll count0=0, count1=0;
    FOR(i,0,n){
        cin>>temp;
        a[i]=temp;
        if(temp==1){
            count1++;
        }
        else{
            count0++;
        }
    }
    ll x,y;
    while(k--){
        cin>>x>>y;
        if(x==1){
            if(a[y-1]==1){
                count0++;
                count1--;
            }
            else{
                count0--;
                count1++;
            }
            a[y-1]=1-a[y-1];
        }
        else{
            if(y<=count1){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }


}
int main(){
    IOS;
    ll t;
    t=1;
    //cin >> t;
    For(i,1,t) {
        solve();
        //cout << solve() << endl;
    }
    return 0;
}