#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
bool valid(vv<vv<int>>& dp, int x, int y, int v){
  if(dp[x-1][y]==v) return false;
  if(dp[x][y-1]==v) return false;
  return true;
}

void solve() {
  int k,temp,sum,res,ans,n;
  cin >> n;
  int x=1,y=1;
  vv<vv<int>> dp(n+2,vv<int>(n+2,0));

  res = n*n;
  while(res--){
    cin >> temp;
    
    For(i,1,3){
      if(i==temp) continue;
      if(valid(dp,x,y,i)){
        dp[x][y]=i;
        cout << i << ' ' << x << ' ' << y << endl;
        
        if(y==n) y=1, x++;
        else y++;
        break;
      }
    }
  }

  cout.flush();


}
int main(){
  IOS;
  int t;
  t=1;
  //cin >> t;
  For(i,1,t) {
    solve();
    //cout << solve() << endl;
  }
  return 0;
}