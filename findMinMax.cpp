#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    for(int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

void findMinMax(struct Array arr){
    int Min = arr.A[0];
    int Max = arr.A[0];
    for(int i = 0; i < arr.length; i++){
        if(arr.A[i] < Min){
            Min = arr.A[i];
        }else if(arr.A[i] > Max){
            Max = arr.A[i];
        }
    }
    cout<<"Min value is : "<<Min<<endl;
    cout<<"Max value is : "<<Max<<endl;

}

int main(){
    struct Array arr1 = {{1,2,6,4,9,12,14,15,15,32}, 10, 10};
    findMinMax(arr1);

    return 0;
}
