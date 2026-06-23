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

int binarySearch(struct Array *arr, int key){
    int l = 0;
    int h = arr->length - 1;
    
    while(l <= h){
        int mid = (l+h)/2;
        if(arr->A[mid] == key){
            return mid;
        } else if(key < arr->A[mid]){
            h = mid-1;
        } else{
            l = mid + 1;
        }
    }
    return -1;
}

int main(){
    struct Array arr1 = {{1,2,3,4,5,6}, 10, 6};
    cout<<"The position of searched element is : "<<binarySearch(&arr1, 5);
    return 0;
}