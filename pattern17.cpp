#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int charInt = 64;
    charInt += n;
    for(int i = 0; i < n; i++){
        int tempChar = charInt - i;
        for(int j = 0; j < i+1; j++){
            cout<<char(tempChar);
            tempChar++;
        }
        cout<<endl;
    }

    return 0;
}