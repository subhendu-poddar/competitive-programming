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
    ll k,temp,sum,res,ans=1,n,x,cnt;
    cin >> n >> k >> x;
    vv<ll> a(n), chk;
    FOR(i,0,n){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    FOR(i,1,n){
        temp = a[i]-a[i-1];
        
        cnt = (temp-1)/x;
        if(cnt>0){
            chk.pb(cnt);
        }
    }

    sort(chk.begin(), chk.end());

    // FOR(i,0,chk.size()){
    //     cout << chk[i] << ' ';
    // }
    // cout << endl;
    
    FOR(i,0,chk.size()){
        if(k<=0){
            ans += (chk.size()-i);
            break;
        }
        else if(k>=chk[i]){
            k -=  chk[i];
        }
        else{
            k = 0;
            ans++;
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