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

class segtree{
    public:
    ll *seg;
    ll segsize;
    map<pair<ll,ll>,ll> mp;
    segtree(){}
    segtree(ll n){
        segsize=4*n;
        seg = new ll [segsize];
    }
    void buildTree(ll arr[], ll start, ll end, ll node){
        //arr is 0 indexed
        if(start==end){
            seg[node]=arr[start];
            mp[{start,end}]=arr[start];
            return;
        }
        ll mid=(start+end)/2;
        buildTree(arr,start,mid,2*node);
        buildTree(arr,mid+1,end,2*node+1);
        seg[node]=seg[2*node]+seg[2*node+1];
        mp[{start,end}] = min(mp[{start,mid}],mp[{mid+1,end}]);
    }
    void update(ll start, ll end, ll pos, ll x, ll node){
        if(pos<start || pos>end){
            return;
        }
        if(start==end){
            seg[node] += x;
            mp[{start,end}]=seg[node];
            return;
        }
        ll mid=(start+end)/2;
        if(mid>=pos) update(start,mid,pos,x,2*node);
        else update(mid+1,end,pos,x,2*node+1);
        seg[node]=seg[2*node]+seg[2*node+1];
        mp[{start,end}] = min(mp[{start,mid}],mp[{mid+1,end}]);
    }
    ll findsum(ll start, ll end, ll qs, ll qe, ll node, ll& money){
        if(mp[{start,end}]>money) return 0;
        if(start>qe || end<qs || money==0) return 0;
        if(start==end){
            if(money>=seg[node]){
                money-=seg[node];
                return 1;
            }
            else{
                return 0;
            }
        }
        if(start>=qs && end<=qe && money>=seg[node]){
            money -= seg[node];
            return (end-start+1);
        }
        ll mid=(start+end)/2;
        return findsum(start,mid,qs,qe,2*node,money)+findsum(mid+1,end,qs,qe,2*node+1,money);
    }
    ll count(ll a, ll b, ll n){
        return findsum(0,n-1,a,n-1,1,b);
    }
    
};

//---------------------------------------------------------------------------//
void solve() {
	ll k,temp=5,sum,res=INF,ans,n,q,x,y;
    cin >> n >> q;
    ll a[n];
    FOR(i,0,n){
        cin >> a[i];
        res = min(res,a[i]);
    }
    segtree s(n);
    s.buildTree(a,0,n-1,(ll)1);


    while(q--){
        cin >> k >> x >> y;
        if(k==1){
            if(a[x-1]<y){
                s.update(0,n-1,x-1,y-a[x-1],(ll)1);
                a[x-1]=y;
            }
        }
        else{
            cout << s.count(x-1,y,n) << endl;
        }
        
    }


    
}


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t;
	t=1;
	//cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}