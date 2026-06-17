#include<iostream>
using namespace std;

int main(){
    int *p;
    p = new int[5];
    for(int i = 0; i < 5; i++){
        p[i] = 10;
    }

    int *q;
    q = new int[10];
    for(int i = 0; i < 5; i++){
        q[i] = p[i];
    }
    q[5] = 20;

    // Print p
    for(int i = 0; i < 5; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;

    // Print q
    for(int i = 0; i < 6; i++){
        cout<<q[i]<<" ";

    }
    cout<<endl;


    return 0;
}