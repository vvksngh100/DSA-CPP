#include<iostream>
using namespace std;

int sum(int n){
    if(n == 1){
        return n;
    }
    else{
        return sum(n-1) + n;
    }
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int res = sum(n);
    cout<<"sum of "<<n<<" natural numbers is "<<res;

    return 0;
}