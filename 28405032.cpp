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
	ll i,j,t,c,m,n,k,r,s,temp,sum,res,ans,a,b,w,x,y,z;

    cin >> t;
    while(t--) {
        cin >> n;
        ll arr1[n], arr2[n];
        FOR(i,0,n) cin >> arr1[i] >> arr2[i];
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        bool flag=false;
        ll val1[2*n];
        char val2[2*n];
        ll temp1=0, temp2=0;
        ans=INF;
        ll pos=0,count=0;
        while(temp1<n || temp2<n) {
            if(arr1[temp1]<=arr2[temp2]) {
                val1[pos]=++count;
                val2[pos]='a';
                ++temp1;
            }
            else {
                val1[pos]=--count;
                val2[pos]='d';
                ++temp2;
            }
            ++pos;
        }
        FOR(i,0,2*n) {
            if(val2[i]=='d') flag=true;
            if(flag==true && val2[i]=='a') ans=min(ans,val1[i]-1);
        }
        if(ans==INF) ans=-1;
        cout << ans << endl;
    }
    
    
    	

	return 0;
}