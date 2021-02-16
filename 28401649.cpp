#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
ll comb(ll n, ll r) {
    ll i,j,ans=1;
    for(i=n;i>n-r;i--) ans=(ans*i/(n-i+1));
    return ans%mod;
}
int main()
{
	IOS;
	ll i,j,t,c,m,n,k,r,s,temp,sum,res,ans,a,b,w,x,y,z,d,e,f;
	
    
    cin >> t;
    while(t--) {
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        ll temp1=0, temp2=0;
        FOR(i,0,n) {
            if(s1[i]=='1') temp1++;
            if(s2[i]=='1') temp2++;
        }
        //cout << temp1 << " " << temp2 << endl;
        ll maxv=(temp1+temp2<n)?temp1+temp2:(2*n-temp1-temp2);
        ll minv=abs(temp1-temp2);
        //cout << maxv << " " << minv << endl;
        ans=0;
        for(i=minv;i<=maxv;i+=2) ans+=comb(n,i),ans%=mod;
        cout << ans << endl;
    }
	return 0;
}