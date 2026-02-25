#include<iostream>
using namespace std;

int pwr(int m, int n){
    if(n == 0){
        return 1;
    } else{
        return pwr(m, n-1) * m;
    }
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<"Power of "<<n<<" to 3 is = "<<pwr(n,3);
    return 0;
}