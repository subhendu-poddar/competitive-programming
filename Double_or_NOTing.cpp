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

ll findtype(string a, string b){
    bool rev=false, same=false;
    if(b.size()>a.size()) return 0;
    ll j=a.size()-1;
    rev(i,b.size()-1,0){
        if(b[i]==a[j]){
            same=true;
        }
        else{
            rev=true;
        }
        j--;
        if(same && rev) return 0;
    }
    if(same) return 1;
    return -1;
}
bool check(string b, ll pos){
    char ch=b[pos];
    FOR(i,pos+1,b.size()){
        if(b[i]!=ch) return false;
    }
    return true;
}


void solve() {
    ll k,temp,sum=0,res,ans=INT_MAX,n, v;
    char ch;
    string a,b;
    cin >> a >> b;
    ll st,end=a.size()-1;
    For(len,1,b.size()){
        st=end-len+1;
        if(st>0 && a[st]==a[st-1]) continue;
        if(!check(b,len)) continue;
        if(len>a.size()) break;
        temp = findtype(a.substr(st,len), b.substr(0,len));
        if(temp==0) continue;
        
        if(st>0) sum=1;
        else sum=0;
        ch=a[0];
        FOR(i,1,st){
            if(a[i]!=ch) sum++;
            ch=a[i];
        }
        res=b.size()-len;

        if(len<b.size()-1 && sum==0 && b[len+1]=='1') continue;

        v=0;
        if(temp==-1 && sum==0) v++;

        ans = min(ans, sum+res+v);
        // cout << len << endl;
    }

    if(ans==INT_MAX){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        cout << ans << endl;
    }



}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        cout << "Case #" << i << ": ";
        solve();
        //cout << solve() << endl;
    }
    return 0;
}