#include<iostream>
using namespace std;

int main(){
    const char* s = "Welcome";

    // Finding the length of the string using the for loop.
    int i;
    for(i = 0; s[i] != '\0'; i++){

    }
    cout<<"Length of the string is "<<i<<endl;

    // Finding the length of the string using the while loop
    int j = 0; 
    while(s[j] != '\0'){
        j++;
    }
    cout<<"Length ot the string is(Using while loop) "<<j;

    return 0;
}