#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,w,i,j;
    cin >> n >> w;
    vector<int> cost(n+1);
    for(i=1;i<=n;i++) cin >> cost[i];
    
    vector<int> dp(w+1,1000000007);
    dp[0]=0;
    for(int i=1;i<=w;i++){
        for(j=1;j<=i;j++){
            if(j<=n && cost[j]!=-1 && dp[i-j]!=-1){
                dp[i] = min(dp[i],cost[j]+dp[i-j]);
            }
        }
        //cout << dp[i] << endl;
    }
    if(dp[w]==1000000007){
        cout << -1 << endl;
    }
    else cout << dp[w] << endl;
    
    
    
    return 0;
}
