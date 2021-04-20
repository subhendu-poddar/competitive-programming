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
ll findLow(ll k){
    return (k*(k+1))/2;
}
ll findHigh(ll k, ll n){
    return (n*(n+1))/2-((n-k)*(n-k+1))/2;
}

void solve() {
    ll k,temp,sum=0,res,ans,n;
    ll l,r,s;
    cin >> n >> l >> r >> s;
    temp = r-l+1;
    ll low=(temp*(temp+1))/2, high = (n*(n+1))/2-((n-temp)*(n-temp+1))/2;

    if(s<low || s>high){
        cout << -1 << endl;
        return;
    }
    vv<ll> a(n+1,0);

    map<ll,bool> taken;
    
    ll top=n, remain=s;

    For(i,l,r){
        rev(j,top,1){
            if(remain-j>=findLow(r-i) && remain-j<=findHigh(r-i,j-1)){
                a[i] = j;
                top = j-1;
                remain -= j;
                taken[j]=true;
                break;
            }
        }
    }

    For(i,1,n){
        if(a[i]!=0) continue;
        For(j,1,n){
            if(!taken[j]){
                a[i]=j;
                taken[j]=true;
                break;
            }
        }
    }

    For(i,1,n){
        cout << a[i] << ' ';
    }
    cout << endl;








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