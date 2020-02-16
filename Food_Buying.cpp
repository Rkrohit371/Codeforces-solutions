#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
			int  n,d,ans,p;

	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		ans=0;
		while(n>0){
			if(n<10){
				ans=ans+n;
				break;
			}
			if(n>=10){
				d=n/10;
				ans+=d*10;
				n=n- d*10 +d;
			}
		}
		cout<<ans<<endl;
	}
} 