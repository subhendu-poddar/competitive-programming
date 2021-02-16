#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	 ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//

void solve() {
	ll i,j,k,temp,sum,res,ans,n;
	scanf("%lld",&n);
	temp=n/2;
	if(n<=3){
		printf("1\n%lld ",n);
		for(i=1;i<=n;i++) {
			printf("%lld ",i);
		}
		printf("\n");
		return;
	}
	else{
		printf("%lld\n",temp);
		printf("3 1 2 3\n");
		for(k=3;k<n-1;k+=2){
			printf("2 %lld %lld\n",k+1,k+2);
		}
		if(k<n){
			printf("1 %lld\n",n);
		}
	}


}

//-------------------------------------------------//

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t,i;
	//t=1;
	scanf("%lld",&t);
	FOR(i,0,t) {
		solve();
	}
	return 0;
}