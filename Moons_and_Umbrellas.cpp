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
    ll k,temp,sum,res,ans=0,n;
    int x,y,count=0;
    string s;
    cin >> x >> y >> s;
    char ch = 'a';
    FOR(i,0,s.size()){
        if(s[i]=='?'){
            count++;
            continue;
        }
        if(x<0 || y<0){
            continue;
        }
        else{
            if(ch=='a'){
                ch = s[i];
                continue;
            }
            if(ch=='J' && s[i]=='C'){
                ans += y;
            }
            else if(ch=='C' && s[i]=='J'){
                ans += x;
            }
            ch = s[i];
        }
    }

    cout << ans;


}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
    return 0;
}