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

void solve() {
    ll k,temp,sum,res,ans,n;
    cin >> n;
    char ch;
    char a[n][n];
    pair<int,int> p1={-1,-1}, p2;
    
    FOR(i,0,n){
        FOR(j,0,n){
            cin >> a[i][j];
            if(a[i][j]=='*'){
                if(p1.ff==-1){
                    p1.ff=i;
                    p1.ss=j;
                }
                else{
                    p2.ff=i;
                    p2.ss=j;
                }
            }
        }
    }
    // cout << p1.ff << p1.ss << endl;
    // cout << p2.ff << p2.ss << endl;

    if(p1.ff==p2.ff){
    
        if(p1.ff!=0){
            a[0][p1.ss]='*';
            a[0][p2.ss]='*';
        }
        else{
            a[1][p1.ss]='*';
            a[1][p2.ss]='*';
        }
    }

    else if(p1.ss==p2.ss){
    
        if(p1.ss!=0){
            a[p1.ff][0]='*';
            a[p2.ff][0]='*';
        }
        else{
            a[p1.ff][1]='*';
            a[p2.ff][1]='*';
        }
    }
    else{
        a[p1.ff][p2.ss]='*';
        a[p2.ff][p1.ss]='*';
    }

    FOR(i,0,n){
        FOR(j,0,n){
            cout<<a[i][j];
        }
        cout<<endl;
    }



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