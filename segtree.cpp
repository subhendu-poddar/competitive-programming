#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define FOR(i,n) for(i=0;i<n;i++)
#define mod 1000000007


void buildtree(ll seg[], ll arr[], ll start, ll end, ll node)
{
	if(start==end)
	{
		seg[node] = arr[start];
		return;
	}
	ll mid = (start+end)/2;
	buildtree(seg, arr, start, mid, 2*node);
	buildtree(seg, arr, mid+1, end, 2*node+1);
	seg[node] = seg[2*node] + seg[2*node+1];
}



int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	IOS;

	ll n,i;
	cin >> n;
	ll* arr = new ll[n];
	FOR(i,n) cin >> arr[i];
	ll* seg = new ll[3*n+1];
	buildtree(seg,arr,0,9,1);
	for(i=1;i<=2*n-1;i++) cout << seg[i] << endl;







	return 0;
}