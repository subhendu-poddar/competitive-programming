#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Graph{
public:
	ll V;
	list<ll> *adj;
    Graph(ll V){
	    this->V = V;
	    adj = new list<ll>[V];
    }
    void addEdge(ll v, ll w){
	    adj[v].push_back(w);
	    adj[w].push_back(v);
    }
    pair<ll, ll> bfs(ll u){
	    ll dis[V];
	    memset(dis, -1, sizeof(dis));
    	queue<ll> q;
	    q.push(u);
    	dis[u] = 0;
    	while (!q.empty()){
	    	ll t = q.front();	 q.pop();
		    for (auto it = adj[t].begin(); it != adj[t].end(); it++){
    			ll v = *it;
	    		if (dis[v] == -1){
		    		q.push(v);
				    dis[v] = dis[t] + 1;
			    }
    		}
	    }
    	ll maxDis = 0;
	    ll nodeIdx;
    	for (ll i = 0; i < V; i++){
    		if (dis[i] > maxDis){
	    		maxDis = dis[i];
			    nodeIdx = i;
		    }
    	}
	    return make_pair(nodeIdx, maxDis);
    }
    ll longestPathLength(){
	    pair<ll, ll> t1, t2;
	    t1 = bfs(0);
    	t2 = bfs(t1.first);
	    return t2.second;
    }

};

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        Graph g(n);
        ll x,y;
        for(ll i=1;i<n;i++){
            cin >> x >> y;
            g.addEdge(x-1,y-1);
        }
        cout << (g.longestPathLength()+1)/2 << endl;
    }
}