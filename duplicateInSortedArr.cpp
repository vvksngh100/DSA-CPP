#include<iostream>
#include<vector>
using namespace std;

void findDuplicate(vector<int>& arr){
    int lastDuplicate = 0;
    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i] == arr[i+1] && arr[i] != lastDuplicate){
            cout<<arr[i]<<" ";
            lastDuplicate = arr[i];
        }
    }
}

int main(){
    vector<int> arr = {1,2,3,4,4,5,5,6,7,7,8};
    findDuplicate(arr);

    return 0;
}