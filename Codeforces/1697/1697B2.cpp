using namespace std;
#include<iostream>
int xmax=0;
void fun(int* ptr,int n,int x){
    int max,in,temp;
    for(int i=0;i<x-xmax;i++){
        max=0;
        for(int j=0;j<n-i-xmax;j++){
            if(ptr[j]>max){
                max=ptr[j];
                in=j;
            }
        }
        temp=ptr[n-1-i-xmax];
        ptr[n-1-i-xmax]=ptr[in];
        ptr[in]=temp;
    }
}

void solve(int a[],int n){
    int x,y,sum=0;
    cin>>x>>y;
    if(x>xmax){
        fun(a,n,x);
        xmax=x;
    }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<"  ";
    // }
    // cout<<endl;
    for(int i=n-x;i<n-x+y;i++){
        sum+=a[i];
    }
    cout<<sum<<endl;
}

int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<q;i++){
        solve(arr,n);
    }
    return 0;
}