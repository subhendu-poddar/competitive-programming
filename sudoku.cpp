#include <bits/stdc++.h>
using namespace std;


bool grid(vector<vector<char>>& A, int x, int y, int val){
    int r=x-x%3, c=y-y%3;
    for(int i=r;i<r+3;i++){
        for(int j=c;j<c+3;j++) if(A[i][j]==48+val) return true;
    }
    return false;
}
bool column(vector<vector<char>>& A, int y, int val){
    for(int i=0;i<9;i++) if(A[i][y]==48+val) return true;
    return false;
}
bool row(vector<vector<char>>& A, int x, int val){
    for(int i=0;i<9;i++) if(A[x][i]==48+val) return true;
    return false;
}
void findans(vector<vector<char>>& A, int x, int y, vector<vector<bool>>& vis, bool& com){
    
    if(com) return;
    if(x==8 && y==9){
        com=true;
        return;
    }
    if(y>8){
        x++;
        y=0;
    }
    if(!vis[x][y]){
        for(int val=1;val<=9;val++){
            if(!grid(A,x,y,val)&&!column(A,y,val)&&!row(A,x,val)){
                cout<<x<<' '<<y<<' '<<val<<endl;
                A[x][y]=val+48;
                findans(A,x,y+1,vis,com);
                cout<<x<<' '<<y<<endl;
                if(com) return;
            }
        }
        A[x][y]=48;
        cout<<"      "<<x<<' '<<y<<endl;
    }
    else{
        findans(A,x,y+1,vis,com);
    }
}




void solveSudoku(vector<vector<char> > &A) {
    vector<vector<bool>> vis(9,vector<bool> (9,true));
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(A[i][j]=='.'){
                vis[i][j]=false;
            }
        }
    }
    bool com=false;
    findans(A,0,0,vis,com);
    
}

int main(){
    freopen("input.txt","r",stdin);

    vector<vector<char>> A(9,vector<char>(9));
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>A[i][j];
        }
    }    
    solveSudoku(A);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<A[i][j];
        }
        cout<<endl;
    }
    return 0;
}
