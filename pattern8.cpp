#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
   for(int i = 0; i<n; i++){
        for(int j = 0; j < n + i; j++){
            if(i+j >= n-1){
                cout<<"*";
            }
            else {cout<<" ";}
        }
        cout<<endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*n - (i+1); j++){
            if(i > j){
                cout<<" ";
            }else {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}