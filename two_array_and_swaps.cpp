#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t>0)
	{
		int n,k;
		cin>>n>>k;
		int a[n],b[n],sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		sort(b,b+n);
		int i=0,j=n-1;
		while(k>0)
		{
			int ma = sum-a[i] + b[j];
			if(sum < ma){
				sum=ma;
				k--;
				i++;
				j--;
			}
			else break;
		}
		cout<<sum<<endl;
		t--;
	}
}