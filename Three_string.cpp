#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		string a,b,c;
		cin>>a>>b>>c;
		int n = a.size();
		for(int i=0;i<n;i++){
			if(b[i]==c[i])
			{
				a[i]=c[i];
			}
			else b[i]=c[i];
		}
		if(a==b)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}