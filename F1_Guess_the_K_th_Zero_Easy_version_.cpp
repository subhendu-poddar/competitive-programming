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
void printst(ll a, ll b){
    string s;
    s+="? ";
    ll temp;
    while(a>0){
        temp = 48+a%10;
        s+=temp;
        a/=10;
    }
    s+=" ";
    while(b>0){
        temp = 48+b%10;
        s+=temp;
        b/=10;
    }
    cout << s << endl;
}
ll reverse(ll n){
    ll ans=0;
    while(n>0){
        ans= ans*10+ (n%10);
        n/=10;
    }
    return ans;
}


void pans(ll b){
    string s;
    s+="! ";
    ll temp;
    while(b>0){
        temp = 48+b%10;
        s+=temp;
        b/=10;
    }
    cout << s << endl;

}
void solve() {
    ll k,t,temp,sum,res,ans,n;
    cin >> n >> t >> k;
    ll st=1, end=n, mid, cnt0, gap;

    while(st<end){
        mid = (st+end)/2;
        printst(st,mid);
        gap = mid-st+1;
        cin >> res;

        cnt0 = gap-res;

        if(cnt0<k){
            k-=cnt0;
            st=mid+1;
        }
        else{
            end=mid;
        }
    }
    pans(reverse(st));



}
int main(){
    IOS;
    // ll t;
    // //t=1;
    // cin >> t;
    // For(i,1,t) {
        solve();
        //cout << solve() << endl;
    // }
    return 0;
}