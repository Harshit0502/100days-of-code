//q2
#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter no. of rows"<<endl;
    cin>>n;
    while(i<=n){
        int s=n-i;
        while(s!=0){
            cout<<"_";
            s=s-1;
        }
        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}