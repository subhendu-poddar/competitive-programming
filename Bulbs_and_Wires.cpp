#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//
ll check(vector<ll> v, ll k){
    FOR(i,0,v.size()){
        if(k>=2){
            k-=2;
        }
        else{
            ll ans=0;
            FOR(j,i,v.size()){
                ans+=v[j];
            }
            return ans;
        }
    }
    return 0;
}

void solve() {
	ll k,temp=5,sum=0,res=0,ans=0,n;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> v;

    ll last1=-1;
    FOR(i,0,s.size()){
        if(s[i]=='1'){
            if(last1==-1){
                last1=i;
            }
            else{
                temp=i-last1-1;
                if(temp>0){
                    v.pb(temp);
                }
                last1=i;
            }
        }
    }
    sort(v.begin(),v.end(),greater<ll>());

    ll start=0, end=0;
    bool st=false, en=false;
    while(s[start]=='0') start++;
    temp=s.size()-1;
    while(s[temp]=='0') temp--;
    if(temp>start){
        end=s.size()-temp-1;
    }

    ll a1=INF,a2=INF,a3=INF,a4=INF;
    a1=check(v,k);
    if(k>0){
        if(start>0) a2=check(v,k-1);
        if(end>0) a3=check(v,k-1);
    }
    if(k>1 && start>0 && end>0) a4=check(v,k-2);
    
    cout << min(min(a1+start+end,a2+end), min(a3+start,a4)) << endl;




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