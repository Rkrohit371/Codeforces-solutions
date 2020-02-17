#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		string str,temp;
			cin>>str;
		int count=0;
		int j=0;
		while(j<n){
			if(str[j]=='A')
				break;
			j++;
		}
		int p=0;
		for(int start=j;start<n;start++){
			if(str[start]=='P')
				p++;
			else if(str[start]=='A')
				p=0;
			if(p>count)
				count=p;
		}
		cout<<count<<endl;
	}
}