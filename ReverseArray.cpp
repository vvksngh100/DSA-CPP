#include<iostream>
#include<stdlib.h>
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

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Reverse(struct Array *arr){
    int *B;
    int i,j;
    B = (int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1, j = 0; i >= 0; i--, j++){
        B[j] = arr->A[i];

    }
    for(i = 0; i<arr->length; i++){
        arr->A[i] = B[i];
    }
}

int main(){
    struct Array arr1 = {{1,2,3,4,5}, 10, 5};
    Reverse(&arr1);
    display(arr1);

    return 0;
}
