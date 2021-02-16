#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define FOR(i,n) for(i=0;i<n;i++)
#define mod 1000000007
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	IOS;
	
	ll i,j,t,n,ans;
	cin >> t;
	while(t--) {
		ans=0;
		cin >> n;
		ll arr[n];
		ll rec[1000005];
		memset(rec, 0, sizeof(rec));
		FOR(i,n) cin >> arr[i];
		for(i=1;i<n;i++) {
			for(j=1;j<=sqrt(arr[i-1]);j++) if((arr[i-1])%j==0){
				if((arr[i-1])/j==j) rec[j]++;
				else {
					rec[j]++;
					rec[arr[i-1]/j]++;
				}
			}
			if(rec[arr[i]]>ans) ans = rec[arr[i]];
		}
		cout << ans << endl;

	}

	return 0;
}