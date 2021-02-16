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
    string s;
    cin >> s;
    vector<ll> x,y;
    x.push_back(0);
    y.push_back(0);
    ll xp=0,yp=0;
    for(i=0;i<s.size();i++) {
        if(s[i]=='R') xp++;
        else if(s[i]=='L') xp--;
        else if(s[i]=='U') yp++;
        else yp--;
        x.push_back(xp);
        y.push_back(yp);
    }
    ll ans1=0, ans2=0;
    for(i=0;i<s.size();i++) {
        ans1+=x[i]*y[i+1];
        ans2+=x[i+1]*y[i];
    }
    cout << abs(ans1-ans2)/2 << endl;




	

}

//-------------------------------------------------//

int main()
{
	//freopen("input.txt", "r", stdin);
	IOS;
	ll t;
	//t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}