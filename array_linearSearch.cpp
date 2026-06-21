#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
    for(int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int linearSearch(struct Array *arr, int key){
    for(int i = 0; i < arr->length; i++){
        if(key == arr->A[i]){
            return i;
        }
    }

    return -1;
}

int main(){
    struct Array arr1 = {{1,2,3,4,5}, 10, 5};
    cout<<"Index of the 4 is : "<<linearSearch(&arr1, 4);
    return 0; 
}