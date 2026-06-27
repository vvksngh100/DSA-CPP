#include<iostream>
#include<vector>
using namespace std;

void findDuplicate(vector<int>& arr){
    vector<int> arr1(arr[arr.size()-1]+1, 0);

    for(int i = 0; i < arr.size(); i++){
        if(arr1[arr[i]] == 0){
            arr1[arr[i]] = 1;
        }else{
            if(arr1[arr[i]] == 1){
                cout<<arr[i]<<" ";
                arr1[arr[i]] += 1;
            } else{
                continue;
            }
        }
    }
}

int main(){
    vector<int> arr = {1,2,3,3,4,5,5,6,6,7};
    findDuplicate(arr);

    return 0;
}