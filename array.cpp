#include<iostream>
using namespace std;

int main(){
    // Declaration only
    int a[5];

    // Declaration and initialisation
    int b[5] = {1,2,3,4,5};

    // Declaration and semi-initialisation
    int c[5] = {1,2,3};
    cout<<c[4];

    // Auto-sized
    int d[] = {12,2};
}