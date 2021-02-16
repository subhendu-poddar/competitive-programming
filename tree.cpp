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
class node{
	public:
	char data;
	hashmap h;
	bool isTerminal;
	node(){}
	node(char ch){
		data=ch;
		isTerminal=false;
	}
};
class Trie{
	public:
	node* root;
	Trie(){
		root= new node();
	}
	void addWord(string word){
		node* temp= root;
		FOR(i,0,word.size()){
			char ch=word[i];
			if(temp->h[ch]){
				temp = temp->h[ch];
			}
			else{
				node* child = new node(ch);
				temp->h[ch] = child;
				temp = child;
			}
		}
		temp->isTerminal=true;
	}

	bool search(string word){
		node* temp=root;
		FOR(i,0,word.size()){
			char ch=word[i];
			if(!temp->h[ch]){
				return false;
			}
			else{
				temp = temp->h[ch];
			}
		}
		return temp->isTerminal;
	}

};
class segtree_sum{
    public:
    ll *seg;
    ll segsize;
    segtree_sum(){}
    segtree_sum(ll n){
        segsize=3*n;
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
        seg[node]=seg[2*node]+seg[2*node+1];
    }
    void printTree(){
        FOR(i,1,segsize){
            cout << seg[i] << ' ';
        }
        cout << endl;
    }
    void update(ll start, ll end, ll qs, ll qe, ll x, ll node){
        if(start>qe || end<qs){
            return;
        }
        if(start==end){
            seg[node]+=x;
            return;
        }
        ll mid=(start+end)/2;
        update(start,mid,qs,qe,x,2*node);
        update(mid+1,end,qs,qe,x,2*node+1);
        seg[node]=seg[2*node]+seg[2*node+1];
    }
    void add(ll l, ll r, ll x, ll n){
        update(0,n-1,l,r,x,1);
    }
    ll findsum(ll start, ll end, ll qs, ll qe, ll node){
        if(start>qe || end<qs) return 0;
        if(start>=qs && end<=qe) return seg[node];
        ll mid=(start+end)/2;
        return findsum(start,mid,qs,qe,2*node)+findsum(mid+1,end,qs,qe,2*node+1);
    }
    ll sum(ll a, ll b, ll n){
        return findsum(0,n-1,a,b,1);
    }




};




//---------------------------------------------------------------------------//
void solve() {
	ll k,temp=5,sum,res,ans,n;
    ll arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    n=sizeof(arr)/sizeof(arr[0]);
    segtree_sum st(n);
    st.buildTree(arr,0,n-1,1);
    st.printTree();
    ll a,b,x;
    while(1){
        cin >> a >> b;
        cout << st.sum(a,b,n) << endl;
        cin >> a >> b >> x;
        st.add(a,b,x,n);
        st.printTree();
        cin >> k;
        if(k!=1) break;
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