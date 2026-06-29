#include<iostream>
using namespace std;

void upperCase(char* s){
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 97 && s[i] <= 122){
            s[i] -= 32;
        }
    }
}

void lowerCase(char* s){
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 65 && s[i] <= 90){
            s[i] += 32;
        }
    }
}

void toggleCase(char* s){
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 65 && s[i] <= 90){
            s[i] += 32;
        } else {
            s[i] -= 32;
        }
    }
}

int main(){
    char s[] = "WELCOME";
    lowerCase(s);
    cout<<"Lower case of the string s is = "<<s<<endl;
    upperCase(s);
    cout<<"Upper case of the string s is = "<<s<<endl;

    char s1[] = "WelComE";
    toggleCase(s1);
    cout<<"Toggle case of the string is = "<<s1;
}