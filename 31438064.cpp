#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	 ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//

void solve() {
	vector<int> v1,v2,v3;
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v2.push_back(6);
	v2.push_back(7);
	v2.push_back(8);

	
	//v3=v1+v2;

	for(int i=0;i<v3.size();i++){
		cout<<v3[i]<<' ';
	}
	cout<<endl;
}

//-------------------------------------------------//

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t,i;
	t=1;
	//cin >> t;
	FOR(i,0,t) {
		solve();
	}

	return 0;
}