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
    ll k,temp=0,sum=0,res,ans=0,n,x,y;
    cin >> n;
    vv<pair<ll,ll>> a(n);
    FOR(i,0,n){
        cin >> x >> y;
        a[i].ff = y;
        a[i].ss = x;
    }
    sort(a.begin(), a.end());

    ll st=0, end=n-1;
    bool now = true;
    temp = a[0].ff;

    while(st<=end){
        
        if(sum>=a[st].ff){
            ans += a[st].ss;
            sum += a[st].ss;
            st++;
        }
        else{
            if(sum+a[end].ss<=a[st].ff){
                temp = a[end].ss;
                ans += 2*temp;
                sum += temp;
                end--;
            }
            else{
                temp = a[st].ff - sum;
                ans += 2*temp;
                sum = a[st].ff;
                a[end].ss -= temp;
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