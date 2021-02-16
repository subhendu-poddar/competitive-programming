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

ll gcd(ll x, ll y){
    if(x==0){
        return y;
    }
    return gcd(y%x,x);
}

ll lcm(ll x, ll y){
    return (x*y)/gcd(x,y);
}

void solve() {
	ll k,cnt,temp,sum,res=INF,ans,n;
    ll x, y;
    cin >> n >> x >> y;
    temp=y-x;

    vector<ll> v(n);

    FOR(i,1,n){
        if( res > lcm(y-x,i)*n/i ){
            res=lcm(y-x,i)*n/i;
            k=i;
        }
    }

    cnt = res/n;
    //cout << cnt << endl;

    FOR(i,0,n){
        v[i] = cnt*i; 
    }
    FOR(i,0,n-1){
        if(v[i]<=y && v[i+1]>=y){
            temp=y-v[i];
            break;
        }
    }
    if(v[n-1]<y){
        temp = y-v[n-1];
    }
    //cout << temp << endl;
    FOR(i,0,n){
        v[i] += temp;
    }
    
    FOR(i,0,n){
        cout << v[i] << ' ';
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