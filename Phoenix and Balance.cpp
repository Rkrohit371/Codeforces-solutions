#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int first=0,second=0;
        vector<int> sum;
        for(int i=1;i<=n;i++)
        {
            sum.push_back(pow(2,i));
        }
        if(sum.size()==2)
            cout<<"2"<<endl;
        else{
            int f= n/2;
            int s = f;
            for(int i=n-1;i>=0;i--)
            {
                if(first<=second){
                    if(f>0){
                        first+=sum[i];
                        f--;
                    }
                    else {
                        second+=sum[i];
                        s--;
                    }
                }
                else{
                    if(s>0){
                        second+=sum[i];
                        s--;
                    }
                    else{
                        first+=sum[i];
                        f--;
                    }
                }
            }
            cout<<abs(first-second)<<endl;
        }
        t--;
    }
    return 0;
}