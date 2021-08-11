#include <bits/stdc++.h>
using namespace std;

bool check(vector<bool>& a){
	int ans1=0, ans2=0;
	int ans3=0, ans4=0;

	for(int i=1;i<=16;i++){
		if(a[i]) ans1 += i*i, ans3 += i*i*i;
		else ans2 += i*i, ans4 += i*i*i;
	}
	if(ans1==ans2 && ans3==ans4){
		cout <<"sqare sum: " << ans1 << endl;
		cout <<"cube sum: " << ans3 << endl;
		return true;
	}
	return false;
}

void find(vector<bool> a, int k){

	if(k>16){
		if(check(a)){
			cout << "Set-1 : ";
			for(int i=1;i<=16;i++){
				if(a[i]) cout << i << ' ';
			}
			cout << endl << "Set-2 : ";
			for(int i=1;i<=16;i++){
				if(!a[i]) cout << i << ' ';
			}
			cout << endl;
			exit(0);
		}
	}
	else{
		a[k]=true;
		find(a,k+1);
		a[k]=false;
		find(a,k+1);
	}
}

int main(){
	vector<bool> a(17, false);
	find(a,1);
	return 0;
}