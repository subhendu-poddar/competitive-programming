#include <bits/stdc++.h>
using namespace std;
int n;
int cost[20][20];
int dp[20][1<<20];

int solve(int ind, int store){
    if(ind==n){
        return 0;
    }

    if(dp[ind][store]!=-1){
        return dp[ind][store];
    }

    int ans=INT_MAX;

    for(int i=0;i<n;i++){
        if(store&(1<<i))
            ans = min(ans, cost[ind][i] + solve(ind+1, store^(1<<i)));
    }
    dp[ind][store]=ans;
    return ans;
}



int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>cost[i][j];
    
    memset(dp,-1,sizeof(dp));
    cout << solve(0,(1<<n)-1) << endl;
    return 0;
}