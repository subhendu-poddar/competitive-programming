#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
int main()
{
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//#endif
	IOS;
	ll i,j,t,c,m,n,k,temp,sum,res,ans;

	ll arr[130];
	memset(arr,0,sizeof(arr));
	arr[0]=0, arr[1]=0;
	FOR(i,2,130) {
		for(j=i-2;j>=1;j--) {
			if(arr[j]==arr[i-1]) {arr[i]=i-j-1; break; }
		}
	}
	//FOR(i,1,15) cout << arr[i] << " ";cout << endl;
	cin >> t;
	while(t--) {
		ans=1;
		cin >> n;
		FOR(i,1,n) if(arr[i]==arr[n]) ans++;
		cout << ans << endl;
	}




	return 0;
}