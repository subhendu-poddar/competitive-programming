#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
ll n;
//-------------------------------------------------//
bool isSafe(ll arr[n][n], ll row, ll col){
	if(row==col) return false;
	FOR(i,0,row){
		
	}
}
bool check(ll arr[n][n], ll row){
	if(row>=n) return true;
	FOR(i,0,n){
		if(isSafe(arr,row,i)){
			arr[row][i]=1;
			if(check(arr,row+1)){
				return true;
			}
			arr[row][i]=0;
		}
	}
}
void solve() {
	ll k,temp,sum,res,ans;
	cin>>n;
	ll arr[n][n]={0};
	check(arr,0);
	FOR(i,0,n){
		FOR(j,0,n){
			cout<<arr[i][j]<<' ';
		}
		cout<<endl;
	}

}


int main()
{
	freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t;
	t=1;
	//cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}