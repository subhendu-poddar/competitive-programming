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
	ll k,temp=5,sum,res,ans,n,maxv=-1;
    cin >> n;
    vector<ll> v(n), pre(n,0);
    FOR(i,0,n){
        cin >> v[i];
        maxv=max(maxv,v[i]);
    }
    if(maxv<0){
        cout << 0 << endl << 0 << endl;
        return;
    }
    pre[0]=v[0];
    FOR(i,1,n) pre[i]=pre[i-1]+v[i];
    temp=0;
    while(v[temp]<0 && temp<v.size()) ++temp;
    sum=0;
    while(v[temp]>=0 && temp<v.size()){
        sum+=v[temp];
    }
    while(v[temp]<0 && temp<v.size()) temp++;
    if(temp==v.size()){
        cout << sum << endl << 0 << endl;
        return;
    }
    res=0;
    while(v[temp]>=0 && temp<v.size()){
        res+=v[temp];
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
		solve();
	}

	return 0;
}