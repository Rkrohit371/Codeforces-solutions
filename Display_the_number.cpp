#include<bits/stdc++.h>
using namespace std;

void solve(long long n)
{
	long long p=n;
	int a=0,b=0,c=0;
	int d=sqrt(n);
	//cout<<d<<endl;
	if(n<24)
	{
		cout<<"NO";
		return;
	}
	for(int i=2;i<=d;i++){
		if(p%i==0){
			a=i;
			p/=a;
			break;
		}
	}
	if(a==0)
	{
		cout<<"NO";
		return;
	}
	for(int i=a+1;i<=d;i++){
		if(p%i==0)
		{
			b=i;
			p/=b;
			break;
		}
	}
	if(b==0){
		cout<<"NO";
		return;
	}

	c=p;
				//cout<<a<<" "<<b<<" "<<c<<" "<<endl;
	if(c==1){
		cout<<"NO";
		return;
	}

	if(a*(b*c)!=n || a==b || b==c || a==c){
		cout<<"NO";
		return;
	}
	else{
		cout<<"YES"<<endl;
		cout<<a<<" "<<b<<" "<<c<<" ";
		return;
	}

}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long n;
		cin>>n;
		solve(n);
		cout<<endl;
	}
}