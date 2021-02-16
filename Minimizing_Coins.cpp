#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,value;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> dp(x+1,INT_MAX);

    for(int i=0;i<=x;i++){
        for(int j=0;j<n;j++){
            value=a[j];
            if(i==value){
                dp[i]=1;
            }
            else if(i>value && dp[i-value]!=INT_MAX){
                dp[i]=min(dp[i],1+dp[i-value]);
            }
        }
    }
    int ans=dp[x]==INT_MAX?-1:dp[x];
    cout << ans << endl;


}