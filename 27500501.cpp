#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define FOR(i,n) for(i=0;i<n;i++)
#define mod 1000000007
int main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	*/
	IOS;

	ll n,i,t,j,k,l;
	cin >> t;
	while(t--) {
		cin >> n;
		ll arr[n],a[n];
		FOR(i,n) cin >> a[i] , arr[i]=a[i];
		l=n;
		while(n>=3) {
			sort(arr,arr+3);
			for(i=2;i<n;i++) arr[i-1] = arr[i];
			n-=1;
		}
		FOR(i,l) {
			if(a[i]==arr[0]) j=i;
			if(a[i]==arr[1]) k=i;
		}
		arr[0] = a[min(j,k)];
		arr[1] = a[max(j,k)];
		cout << arr[0] << " " << arr[1] << endl;
	}



	return 0;
}