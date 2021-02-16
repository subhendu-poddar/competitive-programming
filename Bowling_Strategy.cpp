#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
#define hashmap unordered_map<char,node*>

//---------------------------------------------------------------------------//


//---------------------------------------------------------------------------//
void solve() {
	ll k,temp=5,sum,res,ans,n,l;
    cin >> n >> k >> l;
    if(l*k< n || (k==1 && n>1)){
        cout << -1 << endl;
        return;
    }
    temp=n/k;
    FOR(i,0,temp){
        For(j,1,k){
            cout << j << ' ';
        }
    }
    temp = n-temp*k;
    For(i,1,temp){
        cout << i << ' ';
    }
    cout << endl;

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
		solve();
	}

	return 0;
}