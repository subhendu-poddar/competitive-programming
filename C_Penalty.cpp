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
int rem(int pos, char which){
    if(which=='a'){
        return (9-pos)/2;
    }
    return (10-pos)/2;
}

int solve() {
    ll k,temp,sum,res,ans,n;
    string s;
    cin >> s;

    int ac=0, bc=0, ad=0, bd=0;

    FOR(i,0,s.size()){
        if(s[i]=='1'){
            if(i%2==0) ac++;
            else bc++;
        }
        else if(s[i]=='?'){
            if(i%2==0) ad++;
            else bd++;
        }
        
        if((ac+ad)>(bc+rem(i,'b'))){
            return i+1;
        }
        if((bc+bd)>(ac+rem(i,'a'))){
            return i+1;
        }
    }
    return 10;




}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        // solve();
        cout << solve() << endl;
    }
    return 0;
}