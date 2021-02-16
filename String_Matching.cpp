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

void findlps(vv<ll>& lps, string pat){
    ll len=0, i=1;
    while(i<pat.size()){
        if(pat[i]==pat[len]){
            lps[i++]=++len;
        }
        else{
            if(len>0){
                len=lps[len-1];
            }
            else{
                i++;
            }
        }
    }
}

void solve() {
    ll k,temp,sum,res,ans,n;
    string a,b;
    cin>>a>>b;
    res=0;
    ll pos=0, pat=0;
    vv<ll> lps(b.size(),0);
    findlps(lps,b);
    
    while(pos<a.size()){
        if(a[pos]==b[pat]){
            pos++;
            pat++;
            if(pat==b.size()){
                res++;
                pat=lps[pat-1];
            }
        }
        else{
            if(pat>0){
                pat=lps[pat-1];
            }
            else{
                pos++;
            }
        }
    }
    cout << res << endl;

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