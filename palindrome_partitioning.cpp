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
bool ispalindrome(string s){
	ll n=s.size();
	FOR(i,0,n){
		if(s[i]!=s[n-i-1]) return false;
	}
	return true;
}
ll check(string s, ll st, ll end){
	if(ispalindrome(s.substr(st,end+1)) || st==end) {
		return 0;
	}
	ll cnt=INF;
	FOR(i,st,end){
		cnt=min(cnt,check(s,st,i)+1+check(s,i+1,end));
	}
	return cnt;
}
void solve() {
	ll k,temp,sum,res,ans,n;
	string s;
	cin>>s;
	cout<<check(s,0,s.size()-1)<<endl;
	

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