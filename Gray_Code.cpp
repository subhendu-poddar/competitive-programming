#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//
void solve(string s, int n) {
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    solve(s+'0',n);
    solve(s+'1',n);
}
int main(){
    IOS;
    int n;
    cin >>n;
    solve("",n);
    return 0;
}