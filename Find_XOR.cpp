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
ll solve() {
	ll k,cnt,minus,temp,sum,n,ulim=6;
    cin >> n;
    vector<ll> res(ulim), ans(ulim);
    cnt=0;
    FOR(i,0,ulim){
        temp = 1<<i;
        cout << "1 " << temp << endl;
        cin >> k;
        res[i]=k;
    }
    FOR(i,0,ulim){
        temp = 1<<(i+1);
        if(i==0){
            cnt = res[i]%temp;
            ans[i] = (n-cnt)%2;
            minus=(n-cnt)*temp/2;
            continue;
        }
        cnt = (res[i]/temp - minus)%2;
        ans[i] = (n-cnt)%2;
        minus += (n-cnt)*temp/2;
    }
    ll value=0;
    FOR(i,0,ulim){
        temp = 1<<i;
        if(ans[i]==1) value += temp;
    }
    cout << "2 " << value << endl;


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