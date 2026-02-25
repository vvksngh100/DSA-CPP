#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*n; j++){
            if(n <= i+j && i+j <= n+2*i - 1){
                cout<<" ";
            } else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*n; j++){
            if(j <= i || j >= 2*n -(i + 1)){
                cout<<"*";
            } else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}