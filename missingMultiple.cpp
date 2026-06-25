#include<iostream>
#include<vector>
using namespace std;

void missingNum (vector<int>& arr){
    if(arr.empty()) {
        cout<<"Empty array!"<<endl;

        return ;
    }

    int firstElement = arr[0];
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] - i != firstElement){
            while(firstElement < arr[i] - i){
                cout<<i + firstElement<<" ";
                firstElement++;
            }
        }
    }
}

int main(){
    vector<int> arr = {1,2,3,4,7,8,9};
    cout<<"The missing elements are ";
    missingNum(arr);

    return 0;
}