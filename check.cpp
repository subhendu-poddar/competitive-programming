#include<bits/stdc++.h>
using namespace std;

int findans(int money, int count, int mv){
    if(money==0 && count==0) return 1;
    if(money<0 || mv==0 || count==0) return 0;
    return findans(money,count,mv-1)+findans(money-mv,count-1,mv);
}

long solve(int money, int group){
    int maxv = money;
    vector<vector<vector<long>>> dp(money+1,vector<vector<long>>(group+1,vector<long>(money+1,0)));

    for(int i=1;i<=money;i++){
        for(int j=1;j<=group;j++){
            if(i<j) break;
            for(int k=1;k<=maxv;k++){
                if(j==1){
                    if(j*k<i) continue;
                    dp[i][j][k]=1;
                    continue;
                }
                if(i<k){
                    dp[i][j][k] = dp[i][j][k-1];
                    continue;
                }
                dp[i][j][k] = dp[i-k][j-1][k]+dp[i][j][k-1];
            }
        }
    }
    return dp[money][group][maxv];

}



int main(){
    long long x=2,ans=1;
    while(x<25){
        ans *= x;
        cout << x <<": " << ans << endl;
        x++;
    }









}