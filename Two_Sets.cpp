#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//

void solve() {
	ll k,k=0,sum,res,ans,n;
    cin>>n;
    if(n%4!=0 && (n+1)%4!=0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    vv<ll> v1,v2;
    if(n%2!=0){
        k=4;
        v1.pb(1);
        v1.pb(2);
        v2.pb(3);
    }
    else{
        k=1;
    }
    for(ll i=k;i<=n;i+=4){
        v1.pb(i);
        v1.pb(i+3);
        v2.pb(i+1);
        v2.pb(i+2);
    }
    cout<<v1.size()<<endl;
    FOR(i,0,v1.size()) cout<<v1[i]<<' ';
    cout<<endl<<v2.size()<<endl;
    FOR(i,0,v2.size()) cout<<v2[i]<<' ';
    cout<<endl;
}


int main()
{
	IOS;
	solve();
	return 0;
}