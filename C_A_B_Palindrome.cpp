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

/* Accepted */
bool isPalindrome(string s){
    For(i,0,s.size()/2){
        if(s[i]!=s[s.size()-1-i]) return false;
    }
    return true;
}

void solve() {
    ll k,temp,sum,res,ans,n;
    ll a,b;
    cin >> a >> b;
    n=a+b;
    string s;
    cin >> s;
    FOR(i,0,n){
        if(s[i]=='0') a--;
        else if(s[i]=='1') b--;
    }

    For(i,0,n/2){
        if(s[i]=='?' && s[n-1-i]!='?'){
            if(s[n-1-i]=='0'){
                a--;
                s[i]='0';
            }
            else{
                b--;
                s[i]='1';
            }
        }
        else if(s[i]!='?' && s[n-1-i]=='?'){
            if(s[i]=='0'){
                a--;
                s[n-1-i]='0';
            }
            else{
                b--;
                s[n-1-i]='1';
            }
        }
    }
    
    For(i,0,n/2){
        
        if(s[i]=='?'){
            if(i==n-i-1){
                if(a>0) s[i]='0',a--;
                else s[i]='1', b--;
            }
            else{
                if(a>1) s[i]='0', s[n-1-i]='0', a-=2;
                else s[i]='1', s[n-1-i]='1', b-=2;
            }
        }
    }
    // cout << a << ' ' << b << endl;
    if(a!=0 || b!=0 || !isPalindrome(s)){
        cout << -1 << endl;
        return;
    }


    cout << s << endl;


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