#include <bits/stdc++.h>
using namespace std;

void find(vector<int>& a, int ind, vector<int> v, vector<vector<int>>& ans){
    if(ind==a.size()){
        sort(v.begin(), v.end());
        ans.push_back(v);
        return;
    }
    vector<int> with=v;
    with.push_back(a[ind]);
    find(a,ind+1,v,ans);
    find(a,ind+1,with,ans);
}
bool comparefn(vector<int> a, vector<int> b){
    int sa=a.size(), sb=b.size();
    for(int i=0;i<min(sa,sb);i++){
        if(a[i]<b[i]) return true;
        if(a[i]>b[i]) return false;
    }
    return sa<sb;
}


vector<vector<int>> subsets(vector<int> &A) {
    vector<vector<int>> ans;
    vector<int> v;
    find(A,0,v,ans);

    sort(ans.begin(), ans.end(), comparefn);

    return ans;
}

int main(){
    vector<int> a(3);
    for(int i=0;i<3;i++) a[i]=i+1;
    vector<vector<int>> ans=subsets(a);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }

}