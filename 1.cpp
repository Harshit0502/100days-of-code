#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout <<"enter a charater:"<<endl;
    cin>>ch;
    if(ch >= 97 && ch <= 122){
        cout<<"lowercase"<<endl;
    }
    else if(ch >= 65 && ch <= 90){
        cout<<"uppercase"<<endl;
    }
    else if(ch >= 0 && ch <= 9){
        cout<<"numeric"<<endl;
    }
    else{
        cout<<"special charater"<<endl;
    }
    return 0;
}#   1 0 0 d a y s - o f - c o d e  
 