#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int total=0;
		int arr[n],odd=0,even=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]%2==0)
				even=1;
			else odd=1;
			total+=arr[i];
		}

		if(total%2==0 && even==1 && odd==1)
			cout<<"YES"<<endl;
		else if(total%2!=0)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
	return 0;
}