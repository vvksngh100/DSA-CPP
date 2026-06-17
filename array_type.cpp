#include<iostream>
using namespace std;

int main(){

    // Statid array
    int arr[5] = {1,2,3,4,5};
    cout<<arr[3]<<endl;


    // Dynamic type array
    int *p;
    p = new int[5];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    cout<<p[2]<<endl;

    return 0;
}