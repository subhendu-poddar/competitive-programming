#include <bits/stdc++.h>
using namespace std;

void no_ans(){
    cout << "-1 -1" << endl;
}
int main(){
    int m,s,i,j,sum,pos;
    cin >> m >> s;
    int minv[m],maxv[m];
    if((s==0 && m>1) || s>9*m) {
        no_ans();
        return 0;
    }
    for(i=0;i<m;i++){
        minv[i]=0;
        maxv[i]=0;
    }
    sum=s;
    pos=-1;
    while(sum>0 && pos<m){
        int temp=min(sum,9);
        minv[++pos]=temp;
        sum-=temp;
    }
    if(pos!=m-1 && s>0) {
        --minv[pos];
        minv[m-1]=1;
    }
    sum=s;
    pos=m;
    while(sum>0 && pos>0){
        int temp=min(sum,9);
        maxv[--pos]=temp;
        sum-=temp;
    }
    for(i=m-1;i>=0;i--){
        cout << minv[i];
    }
    cout << ' ';
    for(i=m-1;i>=0;i--){
        cout << maxv[i];
    }


    return 0;
}