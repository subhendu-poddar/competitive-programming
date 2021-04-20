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
    ll k,res,n;
    cin>>n;
    vv<int> a(n), ans;
    unordered_map<int,bool> mp;

    FOR(i,0,n) cin>>a[i];
    ans.pb(a[0]);
    mp[a[0]]=true;


    FOR(i,1,n){
        res=ans.size();
        k=a[i];
        if(!mp[k]){
            ans.pb(k);
            mp[k]=true;
        }
        FOR(j,0,res){
            k=a[i]+ans[j];
            if(!mp[k]){
                ans.pb(k);
                mp[k]=true;
            }
        }
    }
    cout<<ans.size()<<endl;
    sort(ans.begin(),ans.end());
    FOR(i,0,ans.size()){
        cout<<ans[i]<<' ';
    }
    cout<<endl;
}
int main(){
    IOS;
    solve();
    //cout << solve() << endl;
    return 0;
}