#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main(){
    int n,x,value;
    cin>>n>>x;
    vector<int> dp(x+1,0);
    vector<int> coin(n);
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    for(int i=0;i<=x;i++){
        for(int j=0;j<n;j++){
            value=coin[j];
            if(i==value){
                dp[i]++;
            }
            else if(i>value){
                dp[i]+=dp[i-value];
            }
            dp[i]%=mod;
        }
    }
    cout << dp[x] << endl;


    return 0;
}