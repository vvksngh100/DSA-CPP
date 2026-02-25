#include<iostream>
using namespace std;

int pow(int n, int m){
    if(m == 0){
        return 1;
    } else if( m % 2 == 0){
        return pow(n*n, m/2);
    } else{
        return n * pow(n*n, (m-1)/2);
    }
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    int m;
    cout<<"Enter the power upto ";
    cin>>m;
    cout<<"Result is "<<pow(n, m);
}