#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define pr(x) fixed<<setprecision(10)<<x
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n,a) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define INF 1000000000000
#define max_heap(type) priority_queue<type>
#define min_heap(type) priority_queue<type,vv<type>,greater<type>>
#define hashmap unordered_map<char,node*>
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
const ll N = 1000010;
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//

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
class segment{
    public:
    ll *seg;
    ll segsize;
    segment(){}
    segment(ll n){
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
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//

void solve() {
	ll k,temp=5,sum,res,ans,n;
}


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	InverseofNumber();
	InverseofFactorial();
	factorial();
	
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}