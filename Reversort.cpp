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
void reverse(vv<int>& a, int st, int end){
    int j=end;
    For(i,st,(st+end)/2){
        swap(a[i], a[j]);
        j--;
    }
}


int solve() {
    int k,temp,sum,res,ans=0,n;
    cin >> n;
    vv<int> a(n);
    FOR(i,0,n){
        cin >> a[i];
    }
    FOR(i,0,n-1){
        int ind=-1;
        int maxv = INT_MAX;
        FOR(j,i,n){
            if(a[j]<maxv){
                maxv = a[j];
                ind = j;
            }
        }
        reverse(a,i,ind);
        ans += (ind-i+1);
    }
    return ans;


}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        //solve();
        cout << "Case #" << i << ": " << solve() << endl;
    }
    return 0;
}