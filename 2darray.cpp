#include<iostream>
using namespace std;

int main(){
    // Static 2d array
    int a[2][3];  //Array declaration
    int b[2][3] = {
        {1,2,4},
        {4,5,6}
    };

    // Method 2
    int *c[2];
    c[0] = new int[2];
    c[1] = new int[2];


    // Method 3
    int **d;
    d = new int*[2];
    d[0] = new int[2];
    d[0] = new int[2];

    return 0;
}