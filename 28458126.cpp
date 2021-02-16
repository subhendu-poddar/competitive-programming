#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000
int main()
{
    IOS;
    int i,j,t,temp,sum,res,a,b,w,x,y,z;

    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        ll n=s.size();
        s='0'+s;
        ll arr[n+1];
        ll ans=INF;
        ll val1, val2;
        for(i=0;i<=n;i++) {
            if(s[i]=='1') arr[i]=1;
            else arr[i]=0;
        }
        FOR(i,2,n+1) arr[i]+=arr[i-1];
        FOR(i,0,n+1) {
            FOR(j,i,n+1) {
                val1= (i-arr[i])+(arr[j]-arr[i]) +(n-j-(arr[n]-arr[j]));
                val2= (arr[i])+(j-i-(arr[j]-arr[i]))+(arr[n]-arr[j]);
                ans=min(ans,min(val1,val2));
            }
            
        }
        cout << ans << endl;
    }

    

    return 0;
}



