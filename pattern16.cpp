#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i = 0; i < n; i++){
        int charInt = 64;
        for(int j = 0; j < n + i; j++){
            if(i+j < n-1){
                cout<<" ";
            } else if(j < n){
                charInt++;
                cout<<char(charInt);
            } else{
                cout<<char(--charInt);
            }
        }
        cout<<endl;
    }

    return 0;
}