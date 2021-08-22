#include <bits/stdc++.h>
using namespace std;
#define vv vector
#define pb push_back

void find_count(int src, int par, vv<vv<int>>& adj, vv<vv<int>>& ans, vv<int>& ch) {

	ans[src][ch[src]]++;

	for(int child:adj[src]){
		if(child==par) continue;
		
		find_count(child,src,adj,ans,ch);

		for(int j=0;j<26;j++){
			ans[src][j] += ans[child][j];
		}
	}
}


void solve() {
	int n;
	cin >> n;

	vv<vv<int>> adj(n+1);
	vv<int> ch(n+1);
	for(int i=1;i<=n;i++){
		char x;
		cin >> x;
		ch[i]=x-97;
	}
	for(int i=1;i<n;i++){
		int x,y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	
	vv<vv<int>> ans(n+1, vv<int>(26,0));

	find_count(1,0,adj,ans,ch);

	for(int i=1;i<=n;i++){
		cout << ans[i][ch[i]] << ' ';
	}
	cout << endl;





}


int main() {

	int* k = new int [4];
	k[0]=0, k[1]=1, k[2]=2;
	k = new int [1];

	cout << k[4] << endl;



	return 0;

}
