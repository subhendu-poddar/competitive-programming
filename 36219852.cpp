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

string solve() {
	ll k,cnt,temp,sum,res,ans,n;
	string s;
    cin >> n >> s;
    vector<ll> a(26,0);
    FOR(i,0,n){
        a[s[i]-97]++;
    }
    FOR(i,0,26){
        if(a[i]%2!=0){
            return "NO";
        }
    }
    return "YES";
}


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		cout << solve() << endl;
	}

	return 0;
}