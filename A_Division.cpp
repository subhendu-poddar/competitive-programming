#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll p,q,ans=0,temp,count,a,b;
    cin >> p >> q;
    
    ll temp1=p, temp2=q;
        
    for(ll i=2;i*i<=temp2;i++){
        count = 0;
        while(temp2%i==0){
            temp2/=i;
            count++;
        }
        if(count>0){
            temp1=p;
            while(temp1%q==0){
                temp1/=i;
            }
            ans = max(ans,temp1);
        }
    }
    if(temp2>1){
        temp1=p;
        while(temp1%q==0){
            temp1/=temp2;
        }
        ans=max(ans,temp1);
    }
    return ans;

}


int main(){
    ll t;
    cin >> t;

    while(t--){
 
        cout << solve() << endl;


        
    }

    return 0;
}