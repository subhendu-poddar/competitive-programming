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
ll left(vv<ll>& a, ll down){
    ll st=0, end=a.size()-1, mid;
    while(st<end){
        mid = (st+end)/2;
        if(a[mid]<down){
            st=mid+1;
        }
        else{
            if(mid==0 || a[mid-1]<down) return mid;
            end = mid-1;
        }
    }
    if(a[st]<down) return -1;
    return st;
}
ll right(vv<ll>& a, ll up){
    ll st=0, end=a.size()-1, mid;
    while(st<end){
        mid = (st+end)/2;
        if(a[mid]>up){
            end=mid-1;
        }
        else{
            if(mid==a.size()-1 || a[mid+1]>up) return mid;
            st = mid+1;
        }
    }
    if(a[st]>up) return -1;
    return st;
}



void solve() {
    ll k,temp,sum,res,ans=0,n,k1,k2;
    ll l,r;
    cin >> n >> l >> r;
    vv<ll> a(n);
    FOR(i,0,n){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    FOR(i,0,n){
        k1 = left(a,l-a[i]);
        k2 = right(a,r-a[i]);

        if(k1==-1 || k2==-1){
            continue;
        }

        ans+= (k2-k1);

        if(!(k1<=i && k2>=i)){
            ans++;
        }
        
    }
    cout << ans/2 << endl;

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