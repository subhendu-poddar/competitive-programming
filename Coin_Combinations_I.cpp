#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main(){
    int n,x,val;
    cin>>n>>x;
    vector<int> dp(x+1,0);
    dp[0]=1;
    vector<int> coin(n);
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }

    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            val = coin[j];
            if(i>=val){
                dp[i]+=dp[i-val];
            }
            dp[i]%=mod;
        }
    }
    cout << dp[x] << endl;



    return 0;
}