#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//


ll solve() {
	ll k,temp,sum,res,ans,n;
    string s;
    cin>>s;
    ll cnt1=0, cnt2=0;
    stack<char> s1,s2;
    FOR(i,0,s.size()){
        if(s[i]=='('){
            s1.push('(');
        }
        else if(s[i]=='['){
            s2.push('[');
        }
        else if(s[i]==')' && !s1.empty()){
            s1.pop();
            cnt1++;
        }
        else if(s[i]==']' && !s2.empty()){
            s2.pop();
            cnt2++;
        }
    }
    return cnt1+cnt2;

}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		cout<<solve()<<endl;
	}

	return 0;
}