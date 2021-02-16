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
    ll a,b;
    cin >> a >> b;
    if(a>b) {
        temp=a;
        a=b;
        b=temp;
    }
    i=b-a;
    ans=0;
    for(j=1;j<sqrt(i);j++) {
        if(i%j==0) {
            ans+=2;
        }
    }
    j=sqrt(i);
    if(j*j==i) {
        ans++;
    }
    cout << ans << endl;
    




	

}

//-------------------------------------------------//

int main()
{
	//freopen("input.txt", "r", stdin);
	IOS;
	ll t;

	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}