#include<iostream>
#include<vector>
using namespace std;

void findDuplicate(vector<int>& arr){

    for(int i = 0; i < arr.size(); i++){
        int count = 0;
        if(arr[i] != -1){
            for(int j = i+1; j < arr.size(); j++){
                if(arr[i] == arr[j]){
                    count++;
                    arr[j] = -1;
                }
            }
            if(count > 0) cout<<arr[i]<<" ";
        }
    }
}

int main(){
    vector<int> arr = {2,3,1,3,4,5,2,2,5,6,7};
    findDuplicate(arr);

    return 0;
}