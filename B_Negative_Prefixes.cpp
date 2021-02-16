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
	ll k,temp=5,sum,res,ans,n,pos=0;
    cin >> n;
    vector<ll> a(n),ch(n), lk,ulk,op1(n), op2(n),pre1(n,0), pre2(n,0);
    FOR(i,0,n) cin >> a[i];
    FOR(i,0,n) cin >> ch[i];
    FOR(i,0,n){
        if(ch[i]==0){
            ulk.pb(a[i]);
            lk.pb(a[i]);
        }
    }
    sort(ulk.begin(),ulk.end());
    sort(lk.begin(),lk.end(),greater<ll>());
    ll pos1=0, pos2=0;
    FOR(i,0,n){
        if(ch[i]==0){
            op1[i]=ulk[pos1++];
            op2[i]=lk[pos2++];
        }
        else{
            op1[i]=a[i];
            op2[i]=a[i];
        }
    }
    pre1[0]=op1[0];
    pre2[0]=op2[0];
    FOR(i,1,n){
        pre1[i] = pre1[i-1]+op1[i];
        pre2[i] = pre2[i-1]+op2[i];
    }
    ll temp1=0, temp2=0;
    FOR(i,0,n) if(pre1[i]<0) temp1++;
    FOR(i,0,n) if(pre2[i]<0) temp2++;
    if(temp1<=temp2){
        FOR(i,0,n) cout << op1[i] << ' ';
    }
    else{
        FOR(i,0,n) cout << op2[i] << ' ';
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