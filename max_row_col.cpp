#include <bits/stdc++.h>
using namespace std;


int* rowMax(int x[][2], int row, int col){
    int* ans = new int [row];
    for(int i=0;i<row;i++){
        int maxValue = -1; //the numbers are negative too, we can use INT_MIN
        for(int j=0;j<col;j++){
            maxValue = max(maxValue, x[i][j]);
        }
        ans[i] = maxValue;
    }
    return ans;
}

int main(){
    int x[][2] = {{2,1}, {3,4}};
    int* t = rowMax(x,2,2);
    for(int i=0;i<2;i++) cout << t[i] << ' ';
    cout << endl;
    return 0;
}