#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define hashmap unordered_map<int,node*>

class node {
public:
    int data;
    hashmap h;
    int count;
    node(){}
    node(int val){
        data=val;
        count=0;
    }    
};

class trie {
public:
    node *root;
    trie(){
        root = new node;
    }
    void add(int k){
        node* temp = root;
        for(int i=10;i>=0;i--){
            int x=(k&(1<<i));
			if(x!=0) x=1;
            if(temp->h[x]){
                temp = temp->h[x];
            }
            else{
                node* child = new node(x);
                temp->h[x]=child;
                temp = child;
            }
            temp->count++;
        }
    }
    void find(node* temp, int k, int p, vector<vector<ll>>& v, ll& ans, bool poss){
        if(!temp) return;
        if(temp->data==1 && poss){
            if((k&(1<<(10-p)))==0 && poss){
                ans += (temp->count*(temp->count-1))/2;
				find(temp->h[0],k,p+1,v,ans,poss);
				find(temp->h[1],k,p+1,v,ans,poss);
            }
            else{
				v[p].push_back(temp->count);
                find(temp->h[0],k,p+1,v,ans,poss);
				find(temp->h[1],k,p+1,v,ans,poss);
            }
        }
        else{
            if((k&(1<<(10-p)))==1){
                find(temp->h[0],k,p+1,v,ans,!poss);
				find(temp->h[1],k,p+1,v,ans,!poss);
            }
            else{
                find(temp->h[0],k,p+1,v,ans,poss);
				find(temp->h[1],k,p+1,v,ans,poss);
            }
        }
    }
    void findans(int k, vector<vector<ll>>& v, ll& ans, bool poss){
        find(root->h[0],k,0,v,ans,poss);
		find(root->h[1],k,0,v,ans,poss);
    }
};


int main(){
    int n;
    cin >> n;
    trie t;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        t.add(a[i]);
    }
    int k;
    cin >> k;
	vector<vector<ll>> v(11);
	ll ans = 0;
	t.findans(k,v,ans,true);

	for(int i=0;i<=10;i++){
		if(v[i].size()<=1){
			continue;
		}
		ll temp=1;
		for(int j=0;j<v[i].size();j++){
			temp *= v[i][j];
		}
		ans += temp;
	}

    cout << ans << endl;




}