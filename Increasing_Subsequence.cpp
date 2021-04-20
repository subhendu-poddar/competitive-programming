#include <iostream>
using namespace std;
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//

int find_index(int *lis, int l, int r, int val){
    while(l<r){
        int m=(l+r)/2;
        if(lis[m]>=val){
            r=m;
        }
        else{
            l=m+1;
        }
    }
    return r;
}


int main() {
    int n,i,count=-1;
    cin>>n;
    int a[n], lis[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }

    lis[++count]=a[0];

    for(i=1;i<n;i++){
        if(a[i]<lis[0]){
            lis[0]=a[i];
        }
        else if(a[i]>lis[count]){
            lis[++count]=a[i];
        }
        else{
            lis[find_index(lis,0,count,a[i])]=a[i];
        }
    }
    printf("%d\n", count+1);
}