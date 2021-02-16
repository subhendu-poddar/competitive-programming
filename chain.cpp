#include <bits/stdc++.h>
using namespace std;


void solve(){
	int n,q,f,x,y;
	cin>>n>>q;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	while(q--){
		cin>>f>>x>>y;
		if(f==1){
			a[x-1]+=y;
			continue;
		}
		int s=0, res=1;
		for(int i=x;i<y;i++){
			if(a[i]>=a[i-1]) s++;
			else{
				res = max(res,s);
			}
		}
		res = max(res,s);
		cout<<res<<endl;

	}




}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}