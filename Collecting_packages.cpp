#include<bits/stdc++.h>
using namespace std;

void solve(		vector<pair<int,int>>temp,int n)
{
	int a=0,b=0,x=temp[n].first,y=temp[n].second;
	string str="";
	int count=0;
	for(int i=0;i<=n;i++){
		while(temp[i].first>a){
			str+="R";
			a++;
		}
		while(temp[i].second>b){
			str+="U";
			b++;
		}
		if(temp[i].first==a && temp[i].second==b){
			count++;
		}
	}
	if(count== n+1){
		cout<<"YES"<<"\n"<<str;
		return;
	}
	else{
		cout<<"NO";
		return;
	}


}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector<pair<int,int>>temp;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			temp.push_back(make_pair(a,b));
		}
		sort(temp.begin(),temp.end());
		solve(temp,n-1);
		cout<<endl;
	}
}