#include <bits/stdc++.h>
using namespace std;
void print(int n){cout<<n;}
void binary(int n){
    while(n>0){
        print(n&1);
        n/=2;
    }
    cout<<endl;
}

int main(){
    int n;cin>>n;
    binary(n);
    int k;cin>>k;
    binary(k);
    return 0;
}
