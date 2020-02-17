#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  int left=0,right=0;
  for(int i=0;i<n;i++){
      char str;
      cin>>str;
      if(str=='L')
    {
        left++;
    }
    else right++;
  }
  cout<<(left+right+1);
  return 0;
}