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
ll find(string s, ll i){
    if(s[i-1]=='R' && s[i+1]=='L'){
        return 0;
    }
    if(s[i-1]=='R' && s[i]=='R'){
        return 1;
    }
    if(s[i]=='L' && s[i+1]=='L'){
        return 1;
    }
    return 0;
}

ll solve() {
	ll k,cnt,temp,sum,res,ans,n;
    cin >> n;
    string s;
    cin >> s;
    s=s[n-1]+s+s[0];
    vector<ll> a(n+1);
    For(i,1,n){
        a[i]=find(s,i);
    }
    For(i,1,n) cout<<a[i];
    cout << endl;
    vector<ll> v;
    cnt=0;
    For(i,1,n){
        if(a[temp]==1){
            cnt++;
        }
        else{
            v.pb(cnt);
            cnt=0;
        }
    }
    if(a[n]==1){
        if(a[1]==1){
            if(v.size()==0){
                v.pb(cnt);
            }
            else{
                v[0]+=cnt;
            }
        }
        else{
            v.pb(cnt);
        }
    }
    ans=0;
    ll left=1;
    while(a[left]==1){
        left++;
        if(left==n){
            return (n/2);
        }
    }
    FOR(i,0,v.size()){
        if(v[i]==1){
            ans+=1;
            continue;
        }
        ans+=v[i]/2;
    }
    return ans;

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