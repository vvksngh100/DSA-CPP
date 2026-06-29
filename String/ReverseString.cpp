#include<iostream>
using namespace std;

void reverseString(char s[]){
    int length = 0;
    while(s[length] != '\0'){
        length++;
    }

    char* B = new char[length + 1];
    
    int j = 0;
    for(int i = length - 1; i >= 0; i--){
        B[j] = s[i];
        j++;
    }
    B[j] = '\0';
    cout<<"The reversed string is = "<<B<<endl;

    delete[] B;
}

int main(){
    char s[] = "Welcome";
    reverseString(s);
    return 0;
}