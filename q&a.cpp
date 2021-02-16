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
        for(j=1;j<questionAndAnswerVecOfVec[i].size();j++){
            int y = questionAndAnswerVecOfVec[i][j];
            accepted[x].push_back(y);
            given[y].push_back(x);
            mp[y][x]=true;
            if(mp[x][y] && mp[y][x]){
                q.push(x);
                q.push(y);
            }
        }
    }
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        ans.push_back(x);
        
        for(i=0;i<given[x].size();i++){
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
    for(i=0;i<ans.size();i++){
        s = attach(s,reverse(ans[i]));
        if(i!=ans.size()-1){
            s += ',';
        }
    }
    
    return s;

}





vector<string> split(const string& str, char delim) {
    vector<string> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start);
        strings.push_back(str.substr(start, end - start));
    }
    return strings;
}

vector<int> splitStringToInt(const string& str, char delim) {
    vector<int> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start);
        strings.push_back(stoi(str.substr(start, end - start)));
    }
    return strings;
}

void printVector(vector<int> vec) {
    for (vector<int>::const_iterator i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << ' ';
    }
    cout << endl;
}

void printVector(vector<string> vec) {
    for (vector<string>::const_iterator i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << ' ';
    }
    cout << endl;
}

int main() {
    string firstLine;
    getline(cin, firstLine);

    int numOfQuestions = strtol(firstLine.c_str(), NULL, 10);;

    string questionAndAnswerStr;
    getline(cin, questionAndAnswerStr);

    vector<vector<int>> questionAndAnswerVecOfVec;
    vector<string> questionAndAnswerVecByComma = split(questionAndAnswerStr, ',');

    for (vector<string>::const_iterator i = questionAndAnswerVecByComma.begin(); i != questionAndAnswerVecByComma.end(); ++i) {
        vector<int> bankerPreferenceVecByAnd = splitStringToInt(*i, ' ');
        questionAndAnswerVecOfVec.push_back(bankerPreferenceVecByAnd);
    }

    string result = findSuspiciousUserId(numOfQuestions, questionAndAnswerVecOfVec);

    // Do not remove below line
    cout << result << "\n";
    // Do not print anything after this line

    return 0;
}