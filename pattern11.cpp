#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the number ";
    cin>>n;
    for(int i = 0; i < n; i++){
        int counter = 1;
        for(int j = 0; j < 2*n; j++){
            if(j <= i){
                cout<<counter;
                counter++;
            } else if(i+j < 2*n - 1){
                cout<<" ";
            } else{
                cout<<--counter;
            }
        }
        cout<<endl;
    }

    return 0;
}