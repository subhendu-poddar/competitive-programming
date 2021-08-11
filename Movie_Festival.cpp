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
    if(a.ss==b.ss) return a.ff<b.ff;
    return a.ss<=b.ss;
}
int binarySearch(vv<pair<int,int>>& mv, int k, int st, int end){
    while(st<=end){
        if(st==end){
            if(mv[st].ss <= mv[k].ff) return st;
            return -1;
        }
        int mid = (st+end)/2;
        if(mv[mid].ss<=mv[k].ff){
            if(mv[mid+1].ss>mv[k].ff){
                return mid;
            }
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

void solve() {
    int k,temp,sum,res,ans,n,x,y;
    cin >> n;
    vv<pair<int,int>> mv;
    FOR(i,0,n){
        cin >> x >> y;
        mv.pb({x,y});
    }
    sort(mv.begin(), mv.end(), comparefn);
    vv<int> dp(n,1);

    FOR(i,1,n){
        k = binarySearch(mv,i,0,i-1);
        if(k!=-1){
            dp[i] += dp[k];
        }
        dp[i] = max(dp[i-1], dp[i]);
    }
    cout << dp[n-1] << endl;
}
int main(){
    IOS;
    solve();
    //cout << solve() << endl;
    return 0;
}