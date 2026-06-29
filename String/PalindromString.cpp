#include<iostream>
using namespace std;

void checkPalindrome(char s[]){
    int length = 0; 
    while(s[length] != '\0'){
        length++;
    }

    length -= 1;

    for(int i = 0; i < length; i++, length--){
        if(s[i] != s[length]){
            cout<<"The provided string \""<<s<<"\" is not a palindrome."<<endl;
            return ;
        }
    }
    cout<<"The provided string \""<<s<<"\" is a palindrome"<<endl;

}

int main(){
    char s[] = "madam";
    checkPalindrome(s);
    return 0;
}