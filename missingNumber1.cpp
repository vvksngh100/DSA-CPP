#include<iostream>
#include<vector>
using namespace std;

int missingNum(vector<int>& arr){
    if(arr.empty()){
        cout<<"Array is empty!";
        return -1;
    }
    int firstElement = arr[0];

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] - i != firstElement){
            return firstElement + i;
        }
    }
    cout<<"No missing element in the array!";
    return -1;
}

// Using binary search method
int missingNumBin(vector<int>& arr){
    if(arr.empty()){
        cout<<"Array is empty!";
        return -1;
    }
    int min = 0; 
    int max = arr.size()-1;
    int firstElement = arr[0];
    
    while(min < max){
        int mid = (min + max) / 2;
        if(arr[mid] - mid == firstElement){
            min = mid + 1;
        } else{
            max = mid;
        }
    }

    return firstElement + min;
}

int main(){
    vector<int> arr = {6,7,8,9,11,12,13};
    cout<<"Missing number is  = "<<missingNum(arr)<<endl;
    cout<<"Missing number using binary search method is  = "<<missingNumBin(arr)<<endl;

    return 0;
}