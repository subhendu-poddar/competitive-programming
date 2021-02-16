#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
int main(){
    int n,temp,k,m;
    cin>>n;
    queue<pair<int,int>> q;
    q.push({n,0});
    while(!q.empty()){
        auto x=q.front();
        q.pop();
        if(x.ff==0){
            cout << x.ss << endl;
            break;
        }
        temp=x.ff;
        m=0;
        while(temp>0){
            k=temp%10;
            temp/=10;
            m=max(k,m);
        }
        q.push({x.ff-m,x.ss+1});
    }



    return 0;
}