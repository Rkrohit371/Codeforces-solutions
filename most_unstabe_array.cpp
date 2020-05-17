#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int n,m;
		long long int sum=0;
		cin>>n>>m;

		if(n==1)
			cout<<sum<<endl;
		else if(n==2)
			cout<<m<<endl;
		else cout<<m*2<<endl;

		t--;
	}
	return 0;
}