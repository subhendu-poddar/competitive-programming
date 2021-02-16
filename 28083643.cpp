#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
ll convert(char* s) {
    ll k=strlen(s);
    ll i,val=0;
    FOR(i,0,k) if(s[i]=='1') val+=pow(2,k-1-i);
    return val;
}
int main()
{
	IOS;
	ll i,j,t,c,m,n,k,r,s,temp,sum,res,ans,w,x,y,z;

    cin >> t;
    while(t--) {
        char a[100000],b[100000];
        cin >> a >> b;
        x=convert(a);
        y=convert(b);
        ans=0;
        while(y>0) {
            ans++;
            m=x^y;
            n=x&y;
            x=m;
            y=2*n;
        }
        cout << ans << endl;
    }


	return 0;
}