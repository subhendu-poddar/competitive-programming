#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    std::vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    std::stack<int> st;
    unordered_map<int,bool> umap;
    int count=0;
    
    st.push(a[0]);
    for(int i=1;i<n;i++){
        while(!st.empty() && a[i]>=st.top()){
            if(!umap[st.top()-a[i]]){
                count++;
                umap[st.top()-a[i]]=true;
            }
            st.pop();
        }
        if(!st.empty()){
            if(!umap[a[i]-st.top()]){
                count++;
                umap[a[i]-st.top()]=true;
            }
        }
        st.push(a[i]);
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}