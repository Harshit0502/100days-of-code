//q1
#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter no .of rows"<<endl;
    cin>>n;
    while(i<=n){
        int s=i-1;
        while(s){
            cout<<"_";
            s=s-1;
        }
        int j=n;
        while(j>=i){
            cout<<i;
            j=j-1;
        }
        cout<<endl;
        i++;
    }
    return 0;
} 