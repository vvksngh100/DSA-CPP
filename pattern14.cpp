#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i = 0; i < n; i++){
        int charInt = 65;
        for(int j = 0; j < n - i; j++){
            cout<<char(charInt);
            charInt++;
        }
        cout<<endl;
    }
    return 0;
}