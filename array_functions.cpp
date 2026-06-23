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

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int get(struct Array arr, int index){
    if(index >= 0 && index < arr.length){
        return arr.A[index];
    }

    return -1;
}

void set(struct Array *arr, int index, int x){
    if(index >= 0 && index < arr->length){
        arr->A[index] = x;
    }   
}

int max(struct Array arr){
    int max = arr.A[0];
    for(int i = 1; i < arr.length; i++){
        if(max < arr.A[i]){
            max = arr.A[i];
        }
    }

    return max;
}

int min(struct Array arr){
    int min = arr.A[0];
    for(int i = 1; i < arr.length; i++){
        if(min > arr.A[i]){
            min = arr.A[i];
        }
    }

    return min;
}

int sum(struct Array arr){
    int sum = 0;
    int i;
    for(i = 0; i < arr.length; i++){
        sum += arr.A[i];
    }

    return sum;
}

float avg(struct Array arr){
    return (float)sum(arr) / arr.length;
}

int main(){
    struct Array arr1 = {{1,2,3,4,5,6}, 10, 6};

    cout<<"The given array is ";
    display(arr1);
    // cout<<endl;
    cout<<"The element at index 2 is "<<get(arr1, 2)<<endl;
    set(&arr1, 0, 100);
    cout<<"Array after setting 100 at index 0 is ";
    display(arr1);
    cout<<"Max = "<<max(arr1)<<endl;
    cout<<"Min = "<<min(arr1)<<endl;
    cout<<"Sum = "<<sum(arr1)<<endl;
    cout<<"Average = "<<avg(arr1)<<endl;

    return 0;
}