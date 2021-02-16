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

//-------------------------------------------------//

int solve() {
	ll k,temp=5,sum,res,ans,n;
    cin >> n;
    string s;
    cin >> s;
    ll size=s.size();
    if(size%2!=0){
        for(ll i=0;i<s.size();i+=2){
            if(s[i]%2!=0) return 1;
        }
        return 2;
    }
    else{
        for(ll i=1;i<size;i+=2){
            if(s[i]%2==0) return 2;
        }
        return 1;
    }
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