#include<iostream>
using namespace std;

double cale(int x, int n){
    static double p = 1, f = 1;
    double r;
    if(n == 0){
        return 1;
    } else{
        r = cale(x, n-1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}
int main(){
    int x = 2;
    int n = 2;

    cout<<"The of e power "<<x<<" for "<<n<<" number of terms is "<<cale(x,n);
    return 0;
}