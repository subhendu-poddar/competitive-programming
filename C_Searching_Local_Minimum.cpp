#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll int
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
ll solve() {
    ll k,temp,sum,res,ans,n;
    cin>>n;
    vv<ll> a(n+2,INT_MIN);
    a[0]=a[n]=INT_MAX;

    ll q=100, low=1, high=n, mid;
    cout<<"? "<<low<<endl;
    cin>>a[low];
    cout.flush();

    cout<<"? "<<high<<endl;
    cin>>a[high];
    cout.flush();

    while(q--){

        if(low==high) return low;
        mid=(low+high)/2;
        cout << "? " << mid;
        cin>>a[mid];
        cout.flush();

        if(abs(a[low]-a[mid])<abs(low-mid)){
            high=mid;
        }
        else if(abs(a[high]-a[mid])<abs(high-mid)){
            low=mid;
        }
        else{
            if(a[low]>a[high]){
                low=mid;
            }
            else{
                high=mid;
            }
        }

    }
    return low;


}
int main(){
    IOS;
    ll t;
    t=1;
    //cin >> t;
    For(i,1,t) {
        ll k = solve();
        cout << "! " << k << endl;
    }
    return 0;
}