#include <bits/stdc++.h>

using namespace std;


int reverse(int x){
    int ans=0;
    while(x>0){
        int k=x%10;
        ans = ans*10+k;
        x/=10;
    }
    return ans;
}

string attach(string s, int x){
    while(x>0){
        int k = x%10+48;
        s = s+(char)k;
        x /= 10;
    }
    return s;
}

string findSuspiciousUserId(int numOfQuestions, vector<vector<int>> questionAndAnswerVecOfVec) {
    int i,j,k,n=10000;
    map<int,int> mp[n+1], count, list;
    vector<int> ans;
    queue<int> q;
    vector<vector<int>> given(n+1), accepted(n+1);
    
    for(i=0;i<numOfQuestions;i++){
        int x=questionAndAnswerVecOfVec[i][0];
        for(j=1;j<(int)questionAndAnswerVecOfVec[i].size();j++){
            int y = questionAndAnswerVecOfVec[i][j];
            accepted[x].push_back(y);
            given[y].push_back(x);
            mp[y][x]=true;
            if(mp[x][y] && mp[y][x]){
                if(!count[x]) q.push(x);
                if(!count[y]) q.push(y);
                count[x]=3;
                count[y]=3;
            }
        }
    }
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        ans.push_back(x);
        
        for(i=0;i<(int)given[x].size();i++){
            k = given[x][i];
            if(count[k]==3){
                continue;
            }
            if(count[k]==1){
                q.push(k);
                count[k]=3;
            }
            else{
                count[k]++;
            }
        }
    }
    sort(ans.begin(),ans.end());
    
    
    string s="";
    for(i=0;i<(int)ans.size();i++){
        s = attach(s,reverse(ans[i]));
        if(i!=ans.size()-1){
            s += ',';
        }
    }
    
    return s;

}

int main(){
    freopen("input.txt","r",stdin);
    int q,x,y,k;
    cin >> q;
    vector<vector<int>> ques(q);
    for(int i=0;i<q;i++){
        cin >> k;
        while(k--){
            cin >> y;
            ques[i].push_back(y);
        }
    }
    cout << findSuspiciousUserId(q,ques) << endl;


    return 0;
}
