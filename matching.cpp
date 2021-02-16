#include <bits/stdc++.h>
using namespace std;

vector<int> find(string a, string b){
    int m=a.size(), n=b.size(), i, j;
    vector<int> v;
    int x=0, y=0;
    while(x<m){
        if(a[x]==b[y]){
            if(y==n-1){
                v.push_back(x-n+1);
                x=x-n+2;
                y=0;
            }
            else{
                x++;
                y++;
            }
        }
        else{
            if(y==0){
                x++;
            }
            else{
                y--;
            }
        }
    }
    return v;
}

int main(){
    string a,b;
    cin >> a >> b;
    vector<int> v = find(a,b);
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    cout << endl;


    return 0;
}