#include <bits/stdc++.h>
using namespace std;

void print(int n){cout<<n;}
void binary(int n){
    while(n>0){
        print(n&1);
        n/=2;
    }
    cout<<endl;
}


int solve(int A) {
    int a=A;
    vector<int> v;
    int count=0, cnt=1, str;
    while(1){
        int temp = pow(2,(cnt-1)/2);
        if(a>temp){
            a -= temp;
            cnt++;
        }
        else{
            break;
        }
    }
    
    count=cnt;
    str=1;
    vector<bool> dp(count+1,false);
    dp[count]=true;
    dp[str]=true;
    
    for(int i=cnt-2;i>0;i-=2){
        count--;
        str++;
        int temp = pow(2,(i-1)/2);
        if(a>temp){
            a-=temp;
            dp[count]=true;
            dp[str]=true;
        }
    }
    int ans=0;
    for(int i=0;i<cnt;i++){
        if(dp[i+1]){
            ans += pow(2,i);
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;cin>>n;
        binary(solve(n));
    }
    return 0;
}