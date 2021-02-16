#include <bits/stdc++.h>
using namespace std;
typedef ll long long

class segtree{
public:
    ll size;
    ll *seg;
    segtree(){}
    segtree(ll n){
        size=4*n;
        seg=new ll [size];
    }
    void build(ll a[], ll start, ll end, ll node){
        if(start==end){
            seg[node]=a[start];
            return;
        }
        ll mid=(start+end)/2;
        build(a,start,mid,2*node);
        build(a,mid+1,end,2*node+1);
        seg[node]=seg[2*node]+seg[2*node+1];
    }
    void update(ll ind, ll v, ll start, ll end, ll node){
        if(start>ind || end<ind){
            return;
        }
        if(start==end){
            seg[node]=v;
            return;
        }
        ll mid=(start+end)/2;
        update(ind,v,start,mid,2*node);
        update(ind,v,mid+1,end,2*node+1);
        seg[node]=seg[2*node]+seg[2*node+1];
    }
    ll sum(ll l, ll r, ll start, ll end, ll node){
        if(start>r || end<l){
            return 0;
        }
        if(start>=l && end<=r){
            return seg[node];
        }
        ll mid=(start+end)/2;
        return sum(l,r,start,mid,2*node)+sum(l,r,mid+1,end,2*node+1);
    }
};

void solve(){
    ll n,m,i,x,y,z;
    cin >> n >> m;
    ll a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    segtree tree(n);
    tree.build(a,0,n-1,1);
    while(m--){
        cin >> x >> y >> z;
        if(x==1){
            tree.update(y,z,0,n-1,1);
        }
        else{
            cout << tree.sum(y,z-1,0,n-1,1) << endl;
        }
    }
}


int main(){
    solve();
    return 0;
}