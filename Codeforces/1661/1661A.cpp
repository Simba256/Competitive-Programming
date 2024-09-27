using namespace std;
#include<iostream>
#include <cstdlib>
int main(){
    int n,t;
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        cout<<"Input taken"<<endl;
        for(int i=0;i<n-1;i+=2){
            cout<<"iteration "<<i<<endl;
            if(i=0){
                if(abs(a[i]-a[i+1])+abs(b[i]-b[i+1])>abs(b[i]-a[i+1])+abs(a[i]-b[i+1])){
                    swap(a[i],b[i]);
                }
            }
            else if(abs(a[i]-a[i+1])+abs(b[i]-b[i+1])+
            abs(a[i]-a[i-1])+abs(b[i]-b[i-1])>abs(b[i]-a[i+1])+
            abs(a[i]-b[i+1])+abs(b[i]-a[i-1])+abs(a[i]-b[i-1])){
                cout<<"In else if"<<endl;
                swap(a[i],b[i]);
            }
        }
        cout<<"For loop traversed"<<endl;
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=abs(a[i]-a[i+1])+abs(b[i]-b[i+1]);
        }
        cout<<"Sum found"<<endl;
        cout<<sum<<endl;
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++) cout<<b[i]<<" ";

    }
    return 0;
}
