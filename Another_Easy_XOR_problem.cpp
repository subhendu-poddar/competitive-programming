#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(20, vector<int>((1<<20),-1));

int findans(int ind, vector<int>& a, vector<int>& b, int opt){
    if(ind==a.size()) return 0;
    if(dp[ind][opt]!=-1) return dp[ind][opt];

    int ans=INT_MIN;
    for(int i=0;i<a.size();i++){
        if(opt&(1<<i)){
            ans = max(ans, (a[ind]^b[i]) + findans(ind+1,a,b,opt^(1<<i)));
        }
    }
    dp[ind][opt]=ans;
    return ans;
}
int solve(){
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    return findans(0,a,b,(1<<n)-1);
}
int main(){
    cout << solve() << endl;
    return 0;
}