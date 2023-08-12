//dabang
#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter no .of rows"<<endl;
    cin>>n;
    int r=n;
    while(i<=n){
        int j=1;
        while(j<=r){
            cout<<j<<" ";
            j++;
            }
        int s = i-1;    
        while(s){
            cout<<"*"<<" ";
            s=s-1;
        }
        int v = i-1;    
        while(v){
            cout<<"*"<<" ";
            v=v-1;
        }
        int t=n-i+1;
        while(t>=1){
            cout<<t<<" ";
            t--;        
        }
    cout<<endl;
    i++;
    r--;
 
    }
    return 0;
}