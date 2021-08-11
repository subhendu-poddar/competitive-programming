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
int n,m;

struct fenwickTree {
    
    vv<ll> arr;
    fenwickTree(int n){
        arr.resize(n+1,0);
    }

    void build(int pos, int val){
        while(pos<=n){
            arr[pos] += val;
            pos += pos&(-pos);
        }
    }
    void update(int pos, int change) {
        while(pos<=n){
            arr[pos] += change;
            pos += pos&(-pos);
        }
    }
    ll getsum(int pos){
        ll sum=0;
        while(pos>0){
            sum += arr[pos];
            pos -= pos&(-pos);
        }
        return sum;
    }
    ll rangeSum(int x, int y){
        return getsum(y)-getsum(x-1);
    }
};
typedef struct fenwickTree fenwickTree;

void solve() {
    ll k;
    cin >> n >> m;
    vv<int> a(n);
    fenwickTree ft(n);

    FOR(i,0,n){
        cin >> a[i];
        ft.build(i+1,a[i]);
    }
    int z,x,y;
    while(m--){
        cin >> z >> x >> y;
        if(z==1) ft.update(x,y-a[x-1]), a[x-1] = y;
        else cout << ft.rangeSum(x,y) << endl;
    }
}
int main(){
    IOS;
    solve();
    //cout << solve() << endl;
    return 0;
}