#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
const ll N = 500000;

//**************************************//
  
ll factorialNumInverse[N + 1]; 
ll naturalNumInverse[N + 1]; 
ll fact[N + 1]; 
ll power[N + 1];

void InverseofNumber() {
    naturalNumInverse[0] = naturalNumInverse[1] = 1;
    for (int i = 2; i <= N; i++) 
        naturalNumInverse[i] = naturalNumInverse[mod % i] * (mod - mod / i) % mod;
}
void InverseofFactorial(){
    factorialNumInverse[0] = factorialNumInverse[1] = 1; 
    for (int i = 2; i <= N; i++) 
        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % mod; 
}
void factorial() {
    fact[0] = 1; 
    for (int i = 1; i <= N; i++) { 
        fact[i] = (fact[i - 1] * i) % mod; 
    }
}
void Power(){
	power[0]=1;
	For(i,1,N){
		power[i] = (power[i-1]*2)%mod;
	}
}
ll Binomial(ll n, ll r){
    ll ans = ((fact[n] * factorialNumInverse[r]) % mod * factorialNumInverse[n - r]) % mod;
    return ans;
}
 
//-------------------------------------------------//

void solve() {
	ll k,x,cnt,temp=0,sum,res,n,freq=0,size;
    cin >> size;
	vector<ll> vec(size+1,0), ans(size+1,0),v;

	FOR(i,0,n){
		cin >> x;
		vec[x]++;
	}
	v.pb(0);
	For(i,1,n){
		if(vec[i]>0){
			v.pb(vec[i]);
		}
	}
	n=v.size();
	
	ll **comb=new ll* [n+1], **pre=new ll* [n+1];
	For(i,0,n){
		comb[i] = new ll [n+1];
		pre[i] = new ll [n+1];
	}
	comb[0][0]=1;

	For(i,1,n){
		temp=v[i];
		For(j,0,temp){
			if(j==0){
				comb[temp][j]=1;
				continue;
			}
			if(j==1){
				comb[temp][j]=temp;
				continue;
			}
			comb[temp][j]=Binomial(temp,j);
		}
	}

	For(i,1,n){
		pre[v[i]][0] = comb[v[i]][0];
		For(j,1,v[i]){
			pre[v[i]][j] = (comb[v[i]][j] + pre[v[i]][j-1]) % mod;
		}
	}

	ll left=1, right=1;

	For(i,1,n){
		if(v[i]==0){
			ans[i]=0;
			continue;
		}
		For(j,1,v[i]){
			left=1;
			right=1;
			For(l,1,n){
				temp=v[l];
				if(temp==0){
					continue;
				}
				if(l<i){
					if(temp >= j-1){
						left = (left * pre[temp][j-1]) % mod;
					}
					else{
						left = (left * power[temp]) % mod;
					}
				}
				else if(l>i){
					if(temp>=j){
						right = (right * pre[temp][j]) % mod;
					}
					else{
						right = (right * power[temp]) % mod;
					}
				}
			}
			ans[i] = (ans[i] + (left*Binomial(v[i],j)*right)%mod) % mod;
		}
	}

	For(i,1,n){
		cout << ans[i] << ' ';
	}
	cout << endl;


}

int main()
{
	freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;

    InverseofNumber(); 
    InverseofFactorial(); 
    factorial();
	Power();

	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}