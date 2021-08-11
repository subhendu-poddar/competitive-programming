#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define pr pair<int,int>
#define setpr(x) fixed<<setprecision(10)<<x
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define For(i,a,n) for(int i=a;i<=n;i++)
#define rev(i,n,a) for(int i=n;i>=a;i--)
#define mod 1000000007
#define INF 1000000000000
#define max_heap priority_queue<int>
#define min_heap priority_queue<int,vv<int>,greater<int>>
int gcd(int x,int y) {return __gcd(x,y);}
int lcm(int x,int y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//
bool comparefn(pair<int,int>& a, pair<int,int>& b){
    return a.ff<b.ff;
}
void solve() {
    int k,temp,sum,res,ans=1,n,x,y;
    cin >> n;
    vv<pair<int,int>> mv;
    FOR(i,0,n){
        cin >> x >> y;
        mv.pb({x,1});
        mv.pb({y,-1});
    }
    sort(mv.begin(), mv.end(), comparefn);
    FOR(i,1,2*n){
        mv[i].ss += mv[i-1].ss;
        ans=max(ans, mv[i].ss);
    }
    cout << ans << endl;
}
int main(){
    IOS;
    solve();
    //cout << solve() << endl;
    return 0;
}