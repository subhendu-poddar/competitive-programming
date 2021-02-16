#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main(){
    int n,x, mod=1000000007;
    cin>>n>>x;
    int coin[n];
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    vector<vector<ll>> dp(x+1,vector<ll>(n));
    for(int i=0;i<=x;i++){
        for(int j=0;j<n;j++){
            dp[i][j]=0;
            if(i==coin[j]){
                dp[i][j]++;
            }
            else if(i>coin[j]){
                dp[i][j]+=dp[i-coin[j]][j];
            }
            if(j>0) dp[i][j]+=dp[i][j-1];
        }
    }
    dp[x][n-1]%=mod;
    cout << dp[x][n-1] << endl;

    return 0;
}