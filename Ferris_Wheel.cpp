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
void solve() {
    int k,temp,sum,res,ans=0,n,end;
    cin >> n >> k;
    end=n-1;
    vv<int> a(n);
    FOR(i,0,n) cin >> a[i];
    sort(a.begin(), a.end());

    vv<bool> vis(n, false);

    FOR(i,0,n){
        if(!vis[i]){
            bool flag = false;
            while(end>0){
                if(!vis[end] && a[i]+a[end]<=k){
                    ans++;
                    vis[i]=true;
                    vis[end]=true;
                    end--;
                    flag=true;
                    break;
                }
                end--;
            }
            if(!flag) {
                vis[i]=true;
                ans++;
            }
        }
    }
    cout << ans << endl;

}
int main(){
    IOS;
    solve();
    //cout << solve() << endl;
    return 0;
}