#include <bits/stdc++.h>
using namespace std;
#define vv vector
int solve(vv<int> drivers, vv<int> batteries, int p){
	int n=drivers.size(), k=batteries.size();
	for(int i=0;i<n;i++){
		drivers[i]= (drivers[i]-p);
	}
	for(int i=0;i<k;i++){
		batteries[i]= (batteries[i]-p);
	}
	sort(drivers.begin(), drivers.end());
	sort(batteries.begin(), batteries.end());


	for(int i=0;i<n;i++){
		cout<<drivers[i]<<' ';//= (drivers[i]-p);
	}
	cout<<endl;
	for(int i=0;i<k;i++){
		cout<<batteries[i]<<' ';
	}
	cout<<endl;

	int ans=INT_MAX;
	for(int pos=0;pos<k-n+1;pos++){
		int sum=0;
		int j=pos;
		for(int i=0;i<n;i++){
			if(drivers[i]<= batteries[j] && batteries[j] <=0){
				sum+= abs(drivers[i]);
			}
			else if(drivers[i]>= batteries[j] && batteries[j] >=0){
				sum+= abs(drivers[i]);
			}
			else if(drivers[i]<=0){
				if(batteries[j]<=0){
					sum+= -abs(drivers[i])+abs(2*batteries[j]);
				}
				else{
					sum += abs(drivers[i])+abs(2*batteries[j]);
				}
			}
			else{
				if(batteries[i]>=0){
					sum+= -abs(drivers[i])+abs(2*batteries[j]);
				}
				else{
					sum += abs(drivers[i])+abs(2*batteries[j]);
				}
			}
			j++;
		}
		ans=min(ans,sum);
	}
	return ans;
}


int main(){
	std::vector<int> drivers = {20, 100};
	std::vector<int> batteries = {60, 10, 40, 80};
	cout<<solve(drivers, batteries, 50)<<endl;
	return 0;
}