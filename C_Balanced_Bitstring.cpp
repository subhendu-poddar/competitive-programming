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
	ll k,temp,sum,res,ans,n;
    cin >> n >> k;
    vector<ll> p1(n+1,0), p0(n+1,0), pp(n+1,0), cnt(n+1,0);
    string s;
    cin >> s;
    s='0'+s;

    For(i,1,n){
        p1[i]=s[i]=='1'?p1[i-1]+1:p1[i-1];
        p0[i]=s[i]=='0'?p0[i-1]+1:p0[i-1];
        pp[i]=s[i]=='?'?pp[i-1]+1:pp[i-1];
    }
    if(p1[n]>(n+1)/2 || p0[n]>(n+1)/2){
        cout << "1 ";
        return "NO";
    }

    vector<ll> v1,v0;
    FOR(i,1,n){
        if(s[i]=='0'){
            v0.pb(i);
        }
        else if(s[i]=='1'){
            v1.pb(i);
        }
    }
    temp = k/2+1;
    FOR(i,1,v0.size()){
        if((v0[i]-v0[i-1])!=temp && (v0[i]-v0[i-1])!=1){
            cout << v0[i-1] << " " << v0[i] << " ";
            return "NO";
        }
    }

    FOR(i,1,v1.size()){
        if((v1[i]-v1[i-1])!=temp && (v1[i]-v1[i-1])!=1){
            cout << v1[i-1] << " " << v1[i] << " ";
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