#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mod 1000000007
int n;
vector<vector<int>> dp(101,vector<int>((1<<14), vector<vector<int>>& ts);

int find(int ind, int bitmask){
    if(ind==n) return 0;
    if(dp[ind][bitmask] != -1) return dp[ind][bitmask];

    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        ans = min(ans, ts[ind])
    }




}

int solve(){
    cin >> n;
    vector<vector<int>> ts(101);
    cin.ignore();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        //cout << s << endl;
        stringstream cin(s);
        int count;
        while(cin>>count){
            ts[count].pb(i);
            cout << count << ' ';
        }
        cout << endl;
    }
    dp.assign(-1);
    return find(0,(1<<n)-1,ts);
}


int main(){
    int t;
    cin>>t;
    while(t--){
        cout << solve() << endl;
    }

    return 0;
}