#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin>>n>>x;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>v[i];
	}
	int sum=v[0], st=0, end=0, count=0;
	while(st<n && end<n) {
	    /* code */
	    if(sum==x){
	    	count++;
	    	sum -= v[st++];
	    }
	    else if(sum<x) {
	    	sum += v[++end];
	    }
	    else{
	    	sum -= v[st++];
	    }
	}
	cout<<count<<endl;

	return 0;
}