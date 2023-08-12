//q3
#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter no .of rows"<<endl;
    cin>>n;
    int r=n;
    while(i<=n){
        int s=i-1;
        while(s){
            cout<<"_";
            s=s-1;
        }
        int j=1;
        while(j<=r){
            cout<<j;
            j++;
    }
    cout<<endl;
    i++;
    r--;
    }
    return 0;
}