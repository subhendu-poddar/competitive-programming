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

void solve() {
    int k,temp,sum,res,ans,n;
    cin >> n >> k;
    temp = (n*(n+1))/2;
    if(k>=temp || k<n-1){
        cout << "IMPOSSIBLE";
        return;
    }

    vv<int> a(n+1,0);
    For(i,1,n){
        a[i] = i;
    }
    k-=n-1;
    int st=1, end=n;
    bool right=true;
    while(k>0){
        if(k>=(end-st)){
            reverse(a,st,end);
            k-= (end-st);
            if(right) end--;
            else st++;
            right = !right;
        }
        else{
            reverse(a,st,st+k);
            k=0;
        }
    }
    For(i,1,n){
        cout << a[i] << ' ';
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
        cout << endl;
    }
    return 0;
}