#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
    int n;
    cin >> n;
    vector<ll> dp(n+1,0);
    dp[1]=1;
    for(int i=2;i<=min(n,6);i++){
        dp[i]=2*dp[i-1];
    }
    for(int i=7;i<=n;i++){
        for(int j=1;j<=6;j++){
            dp[i] += dp[i-j];
            dp[i]%=mod;
        }
    }
    cout << dp[n] << endl;
    return 0;
}