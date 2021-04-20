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
vv<ll> par,ans;
ll getparent(ll ch){
    return par[ch]==ch?ch:getparent(par[ch]);
}
bool fn(pair<pair<ll,ll>,ll>& a, pair<pair<ll,ll>,ll>& b){
    return a.ss==b.ss?a.ff.ss==b.ff.ss?a.ff.ff<=b.ff.ff:a.ff.ss<=b.ff.ss:a.ss<=b.ss;
}

void solve() {
    ll k,temp,sum,res,n,x,y,count;
    cin>>n;
    count=n;
    par.resize(2*n);
    ans.resize(2*n);
    vv<pair<pair<ll,ll>,ll>> a;
    vv<vv<ll>> arr(n+1,vv<ll>(n+1));

    For(i,1,n){
        For(j,1,n){
            cin>>temp;
            arr[i][j]=temp;
            if(i==j){
                ans[i]=temp;
                par[i]=i;
            }
            else if(i>j){
                a.pb({{i,j},temp});
                par[i]=i;
                par[j]=j;
            }
        }
    }
    sort(a.begin(),a.end(),fn);

    FOR(i,0,a.size()){
        auto val=a[i];
        x=getparent(val.ff.ff);
        y=getparent(val.ff.ss);
        if(ans[x]==arr[val.ff.ff][val.ff.ss]){
            par[y]=par[x]=x;
        }
        else if(ans[y]==arr[val.ff.ff][val.ff.ss]){
            par[y]=par[x]=y;
        }
        else{
            ++count;
            par[x]=par[y]=par[count]=count;
            ans[count]=arr[val.ff.ff][val.ff.ss];
        }
    }
    cout<<count<<endl;
    For(i,1,count) cout<<ans[i]<<' ';
    cout<<endl<<count<<endl;
    For(i,1,count-1){
        cout<<i<<' '<<par[i]<<endl;
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