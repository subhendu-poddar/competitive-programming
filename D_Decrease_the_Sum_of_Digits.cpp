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
vector<ll> find(ll n){
    stack<ll> st;
    while(n>0){
        st.push(n%10);
        n/=10;
    }
    vector<ll> v;
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();
    }
    return v;
}

void make(vector<ll>& ans, ll k){
    if(ans[k]<9){
        ans[k]++;
        return;
    }
    return make(ans,k-1);
}

ll val(vector<ll>& ans){
    ll k=0;
    FOR(i,0,ans.size()){
        k = k*10 + ans[i];
    }
    return k;
}

ll solve() {
	ll k,cnt,temp,sum,res,n,s;
    cin >> n >> s;
    vector<ll> v = find(n);
    vector<ll> ans(v.size()+1,0);
    temp=0;
    For(i,1,v.size()+1){
        if(temp+v[i-1]>s){
            if(v[i-1]<9){
                ans[i]=v[i-1]+1;
            }
            else{
                make(ans,i);
            }
            k = val(ans);
            return (k-n);
        }
        else{
            ans[i]=v[i-1];
            temp+=ans[i];
        }
    }




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