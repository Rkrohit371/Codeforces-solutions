#include<bits/stdc++.h>
using namespace std;

void solve(int a,int b,int c,int d)
{
	std::vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(),v.end());
	int min=v[0];
	int sec=v[1];
	int max=v[2];
	int left=max-sec;
	if(d>=left){
		sec+=left;
		d-=left;
	}
	else {
		cout<<"NO";
		return;
	}
	left=max-min;
	if(d>=left){
		min+=left;
		d-=left;
	}
	else{
		cout<<"NO";
		return;
	}
	if(d%3==0){
		cout<<"YES";
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
	for(int i=0;i<n;i++){
		int n;
		cin>>n;
		vector<pair<int,int>>temp;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			temp.push_back(make_pair(a,b));
		}
		sort(temp.begin(),temp.end());
		solve(temp);
	}
}