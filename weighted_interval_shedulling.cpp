#include <bits/stdc++.h>
using namespace std;
class task{
    public:
        int start;
        int end;
        int cost;
        task(){}
        task(int a, int b, int c): start(a), end(b), cost(c){}
};

bool comparefn(task a, task b){
    return a.end<b.end;
}
int findlast(vector<task>& a, int n){
    for(int i=n-1;i>=0;i--){
        if(a[i].end<=a[n].start){
            return i;
        }
    }
    return -1;
}
int findLastUsingBinarySearch(vector<task>& a, int n){
    int low=0, high=n-1;
    while(low<high){
        int mid=(low+high)/2;
        if(a[mid].end<=a[n].start){
            if(a[mid+1].end>a[n].start){
                return mid;
            }
            else{
                low=mid+1;
            }
        }
        else{
            high = mid-1;
        }
    }
}


int solve(vector<int>& A, vector<int>& B, vector<int>& C){
    int n=A.size();
    vector<task> a;
    for(int i=0;i<n;i++){
        task t(A[i],B[i],C[i]);
        a.push_back(t);
    }
    sort(a.begin(),a.end(),comparefn);

    vector<int> dp(n);
    dp[0] = a[0].cost;
    for(int i=1;i<n;i++){
        dp[i] = a[i].cost;
        int ptr = findLastUsingBinarySearch(a,i);
        if(ptr!=-1){
            dp[i] += a[ptr].cost;
        }
        dp[i] = max(dp[i-1],dp[i]);
    }
    return dp[n-1];
}



int main(){
    int n;
    cin >> n;
    vector<int> A(n), B(n), C(n);
    FOR(i,0,n){
        cin >> A[i] >> B[i] >> C[i];
    }
    solve(A,B,C);
    return 0;
}