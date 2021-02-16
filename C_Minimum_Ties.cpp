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
    ll k,temp=1,sum,res,ans,n;
    cin>>n;
    map<pair<ll,ll>,ll> mp;
    vv<ll> v(n+1,0);
    For(i,1,n){
        For(j,i+1,n){
            if(v[j]<0){
                mp[{i,j}]=-1;
                v[j]++;
                v[i]--;
            }
            else{
                mp[{i,j}]=1;
                v[i]++;
                v[j]--;
            }
        }
    }
    For(i,1,n){
        if(v[i]==0) continue;
        For(j,i+1,n){
            if(v[j]==0) continue;
            if(v[i]==-v[j]){
                v[i]=0;
                v[j]=0;
                mp[{i,j}]=1;
            }
        }
    }
    For(i,1,n){
        For(j,i+1,n){
            cout<<mp[{i,j}]<<' ';
        }
    }
    cout<<endl;

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