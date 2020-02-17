#include <iostream>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    long long int  x,y,a,b;
    cin>>x>>y>>a>>b;
    long long int temp,div;
    temp=y-x;
    div=a+b;
    long long int len=temp/div;
    if(temp%div==0)
      cout<<len<<endl;
    else cout"-1"<<endl;
  }
  return 0;
}