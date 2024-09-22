#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        int value1,value2;
        short int galt=0;
        short int no_value1=0,no_value2=0;
        bool good = true;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i==0)
            value1=a[0];
            if(value1 != a[i])
            {
                if(no_value2==0)
                {
                value2=a[i];
                no_value2++;
                }
                else if(a[i]!=value2){
                    galt++;
                    good=false;
                   break;
                }
            }
        }
        
        if(galt!=1)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]==value1)
                no_value1=no_value1+1;
                else if(a[i]==value2)
                no_value2= no_value2 +1;

            }

        if(abs(no_value1-no_value2)<=1){
           good=true; 
        }
        else if(no_value2==0)
        good =true;
        else 
        good = false;
        }

    if(good)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    t--;

    }
}