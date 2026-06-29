#include<iostream>
using namespace std;

void count(char s[]){
    int i = 0;
    int vcount = 0;
    int ccount = 0;
    for(; s[i] != '\0'; i++){
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'){
            vcount++;

        }else if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)){
            ccount++;
        }
    }
    
    cout<<"Vowel count in "<<s<<" is = "<<vcount<<endl;
    cout<<"Consonent cout in "<<s<<" is = "<<ccount<<endl;

}

int main(){
    char s[] = "Hello World";
    count(s);
    return 0;
}