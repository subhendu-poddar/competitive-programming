#include <bits/stdc++.h>
using namespace std;
class segtree{
public:
    int size;
    int *seg;
    segtree(){}
    segtree(int n){
        size=4*n;
        seg=new int [size];
    }
    void build(int a[], int start, int end, int node){
        if(start==end){
            seg[node]=a[start];
            return;
        }
        int mid=(start+end)/2;
        build(a,start,mid,2*node);
        build(a,mid+1,end,2*node+1);
        seg[node]=min(seg[2*node],seg[2*node+1]);
    }
    void update(int ind, int v, int start, int end, int node){
        if(start>ind || end<ind){
            return;
        }
        if(start==end){
            seg[node]=v;
            return;
        }
        int mid=(start+end)/2;
        update(ind,v,start,mid,2*node);
        update(ind,v,mid+1,end,2*node+1);
        seg[node]=min(seg[2*node],seg[2*node+1]);
    }
    int minimum(int l, int r, int start, int end, int node){
        if(start>r || end<l){
            return 1000000001;
        }
        if(start>=l && end<=r){
            return seg[node];
        }
        int mid=(start+end)/2;
        return min(minimum(l,r,start,mid,2*node),minimum(l,r,mid+1,end,2*node+1));
    }
    int count(int l, int r, int start, int end, int node,const int &ans){
        if(start>r || end<l || seg[node]>ans){
            return 0;
        }
        if(start==end) return 1;
        int mid=(start+end)/2;
        return count(l,r,start,mid,2*node,ans)+count(l,r,mid+1,end,2*node+1,ans);     
    }
};
void solve(){
    int n,m,i,x,y,z;
    cin >> n >> m;
    int a[n];
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
            int k=tree.minimum(y,z-1,0,n-1,1);
            int x=tree.count(y,z-1,0,n-1,1,k);
            cout << k << ' ' << x << endl;
        }
    }
}
int main(){
    solve();
    return 0;
}