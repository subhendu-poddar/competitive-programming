#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<float>> inp(19,vector<float>(19));
vector<vector<float>> dp(19,vector<float>((1<<19),-1));

float find(int mask, int cnt){
    if(cnt==n) return 0;
    if(dp[cnt][mask] != -1) return dp[cnt][mask];

    int ans=0;
    for(int i=0;i<n;i++){
        if(mask&(1<<i)==0){
            ans += find((mask^(1<<i)),count+1);
        }
    }
    ans/=((float)cnt*(cnt+1)/2);
    dp[count][mask]=ans;
    return ans;


}

void solve(){
    cin>>n;
    dp[n][(1<<n)-1]=1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> inp[i][j];
    for(int i=0;i<n;i++){
        cout << find((1<<i),1) << ' ';
    }
    cout << endl;

}

int main(){
    solve();
    return 0;
}