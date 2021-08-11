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
void update(vv<vv<bool>>& check, int x, int y){
    if(x<0 || x>=check.size() || y<0 || y>=check[0].size()) return;

    if(!check[x][y]){
        check[x][y]=true;
    
        update(check,x-1,y);
        update(check,x+1,y);
        update(check,x,y-1);
        update(check,x,y+1);
    }
    

}



void solve() {
    int n,m, ans=0;
    cin >> n >> m;
    vv<vv<char>> a(n,vv<char>(m));
    vv<vv<bool>> check(n,vv<bool>(m, false));
    FOR(i,0,n){
        FOR(j,0,m){
            cin >> a[i][j];
            if(a[i][j]=='#') check[i][j]=true;
        }
    }

    FOR(i,0,n){
        FOR(j,0,m){
            if(!check[i][j]){
                ans++;
                update(check,i,j);
            }
        }
    }

    cout << ans << endl;




}
int main(){
    IOS;
    // ll t;
    // //t=1;
    // cin >> t;
    // For(i,1,t) {
    //     solve();
    //     //cout << solve() << endl;
    // }
    solve();
    return 0;
}