#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
bool comparefn(pair<int,int> a, pair<int,int> b){
    return a.ss<b.ss;
}

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++) cin>>a[i].ff;
    for(int i=0;i<n;i++) cin>>a[i].ss;
    sort(a.begin(),a.end(),comparefn);
    int dleft=n, cdist, ans=0; 
    for(int car=0;car<n;car++){
        cdist = min(a[car].ss,dleft);
        dleft-=cdist;
        ans += cdist*a[car].ff;
        if(dleft==0) break;
    }
    
    
    cout<<ans<<endl;
    
    
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
