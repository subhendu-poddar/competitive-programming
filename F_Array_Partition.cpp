#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
#define hashmap unordered_map<char,node*>

//---------------------------------------------------------------------------//

class segment_min{
    public:
    ll *seg;
    ll segsize;
    segment_min(){}
    segment_min(ll n){
        segsize=4*n;
        seg = new ll [segsize];
    }
    void buildTree(ll arr[], ll start, ll end, ll node){
        //arr is 0 indexed
        if(start==end){
            seg[node]=arr[start];
            return;
        }
        ll mid=(start+end)/2;
        buildTree(arr,start,mid,2*node);
        buildTree(arr,mid+1,end,2*node+1);
        seg[node]=min(seg[2*node],seg[2*node+1]);
    }
    ll findmin(ll start, ll end, ll qs, ll qe, ll node){
        if(start>qe || end<qs) return INT_MAX;
        if(start>=qs && end<=qe) return seg[node];
        ll mid=(start+end)/2;
        return min(findmin(start,mid,qs,qe,2*node),findmin(mid+1,end,qs,qe,2*node+1));
    }
    ll minimum(ll a, ll b, ll n){
        return findmin(0,n-1,a,b,1);
    }
};

class segment_max{
    public:
    ll *seg;
    ll segsize;
    segment_max(){}
    segment_max(ll n){
        segsize=4*n;
        seg = new ll [segsize];
    }
    void buildTree(ll arr[], ll start, ll end, ll node){
        //arr is 0 indexed
        if(start==end){
            seg[node]=arr[start];
            return;
        }
        ll mid=(start+end)/2;
        buildTree(arr,start,mid,2*node);
        buildTree(arr,mid+1,end,2*node+1);
        seg[node]=max(seg[2*node],seg[2*node+1]);
    }
    ll findmax(ll start, ll end, ll qs, ll qe, ll node){
        if(start>qe || end<qs) return 0;
        if(start>=qs && end<=qe) return seg[node];
        ll mid=(start+end)/2;
        return max(findmax(start,mid,qs,qe,2*node),findmax(mid+1,end,qs,qe,2*node+1));
    }
    ll maximum(ll a, ll b, ll n){
        return findmax(0,n-1,a,b,1);
    }
};



void solve() {
	ll k,temp=5,sum,res,ans,n,x,y,z;
    cin>>n;
    ll arr[n];
    vector<ll> a, pre(n), suf(n);
    unordered_map<ll,vector<ll>> mp;
    FOR(i,0,n){
        cin>>arr[i];
        mp[arr[i]].pb(i);
    }
    segment_min stmin(n);
    segment_max stmax(n);

    stmin.buildTree(arr,0,n-1,1);
    stmax.buildTree(arr,0,n-1,1);
    
    FOR(i,0,n){
        k=arr[i];
        a=mp[k];
        for(ll temp=a.size()-1;temp>=0;temp--){
            ll j=a[temp];
            if(j<=i) continue;
            x=stmax.maximum(0,i,n);
            y=stmin.minimum(i+1,j,n);
            z=stmax.maximum(j+1,n-1,n);
            //cout << i << ' ' << j << ' ' << x <<' '<<y<<' '<<z<<endl;
            if(x==y && y==z){
                cout<<"YES"<<endl;
                
                cout << i << ' '<< j << endl;
                //cout<<i+1<<' '<<j-i-1<<' '<<n-j<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
    cout<<endl<<endl<<endl;
    return;
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