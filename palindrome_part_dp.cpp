#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//
void solve() {
	ll k,temp,sum,res,ans,n;
	string s;
	cin>>s;
	n=s.size();
	ll c[n][n]={0};
	bool pal[n][n]={false};
	For(i,0,n-1){
		c[i][i]=0;
		pal[i][i]=true;
	}
	For(l,2,n){
		For(i,0,n-l){
			ll j=i+l-1;
			if(l==2 && s[i]==s[j]){
				c[i][j]=0;
				pal[i][j]=true;
			}
			else{
				if(s[i]==s[j] && pal[i+1][j-1]){
					c[i][j]=0;
					pal[i][j]=true;
				}
				else{
					c[i][j]=INF;
					For(k,i,j-1){
						c[i][j]=min(c[i][j],c[i][k]+1+c[k+1][j]);
					}
				}
			}
		}
	}
	cout<<c[0][n-1]<<endl;
	

}


int main()
{
	freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}