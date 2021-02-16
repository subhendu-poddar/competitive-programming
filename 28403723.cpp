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
	ll i,j,t,c,m,n,k,r,temp,sum,res,ans,a,b,w,x,y,z;
    ll N;
    cin >> t;
    while(t--) {
        cin >> n;
        string s;
        cin >> s;
        ll arr[26]={0};
        s='0'+s;
        ans=0;
        for(i=1;i<=n;i++) {
            if(arr[s[i]-'a']) {
                ans=max(ans,n+arr[s[i]-'a']-i);
            }
            arr[s[i]-'a']=i;
        }
        cout << ans << endl;
    }
	

	return 0;
}