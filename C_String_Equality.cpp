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


string solve() {
	ll k,temp,sum,res,ans,n;
    cin>>n>>k;
    string a,b;
    cin>>a>>b;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    //cout<<a<<endl<<b<<endl;

    FOR(i,0,n){
        if(a[i]==b[i]) continue;
        if((a[i]>b[i]) || ((i+k)>n)){
            return "No";
        }
        FOR(j,i+1,i+k){
            if(a[j]!=a[j-1]){
                return "No";
            }
        }
        FOR(j,i,i+k){
            a[j]=b[i];
        }
    }
    if(a==b) return "Yes";
    return "No";
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