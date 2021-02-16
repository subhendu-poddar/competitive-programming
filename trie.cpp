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

//-------------------------------------------------//
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

void solve() {
	ll k,temp=5,sum,res,ans,n;
	string s[] = {"apple", "ape", "applet", "orange", "kitkat", "kite"};
	Trie t;
	FOR(i,0,6){
		t.addWord(s[i]);
	}
	bool check=t.search("network");
	if(check) cout << "found" << endl;
	else cout << "not found" << endl;
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