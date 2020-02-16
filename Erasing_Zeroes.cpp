#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	cout<<"enter";
	cin>>t;
	for(int i=0;i<t;i++){
		string str;
		//cout<<i<<endl;
		//getline(cin, str);
		cin>>str;
		int start=0;
		int total=0;

		int n=str.length()-1;
		int end=n;
		for(int j=0;j<=n;j++){
			if(str[j]=='1'){
				start=j;
				break;
			}
		}
		//cout<<"start="<<start<<endl;
		for(int j=n;j>=0;j--){
			if(str[j]=='1'){
				end=j;
				break;
			}
			else end--;
		}
		//cout<<"end="<<end<<endl;
		for(int j=start;j<=end;j++){
			if(str[j]=='0' && start<end)
				total++;
		}
		cout<<total<<endl;
	}
	return 0;
}
