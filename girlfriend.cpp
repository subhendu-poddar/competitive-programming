#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define INF INT_MAX
#define vv vector
#define min_heap priority_queue<pair<ll,ll>,vv<pair<ll,ll>>,greater<pair<ll,ll>>>
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//

int main(){
    
    ll from=1,to,n,r,x,y,z,i,cnt,next,temp, cost;
    scanf("%lld %lld", &n, &r);

    list< pair<ll, ll> > *adj = new list <pair<ll,ll>> [n+1];

    vv<ll> upto(n+1, INF);

    min_heap heap;
    heap.push({0,1});

    upto[1]=0;
    

    for(i=0;i<r;i++) {
        scanf("%lld %lld %lld", &x, &y, &z);

        adj[x].push_back({y,z});
        adj[y].push_back({x,z});
    }

    while(!heap.empty()){

        from = heap.top().ss;   heap.pop();

        list< pair<ll, ll> >::iterator k;
        for(k = adj[from].begin(); k != adj[from].end(); ++k){

            to= (*k).ff;
            cost = (*k).ss;

            temp = max(upto[from], cost);

            if(upto[to] > temp){
                upto[to]=temp;
                heap.push({upto[to],to});
            }
        }
    }
    
    if(upto[n]==INF) {
        printf("NOT POSSIBLE");
    }
    else{
        printf("%lld", upto[n]);
    }

    return 0;
}