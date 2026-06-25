#include<iostream>
#include<vector>
using namespace std;

int missingNum(vector<int>& arr){
    int n = arr.size() + 1;

    int sumN = n * (n + 1) / 2;
    int sumA = 0;
    for(int i = 0; i < arr.size(); i++){
        sumA += arr[i];
    }

    return sumN - sumA;
}

// Using XOR method
int missingNumXor(vector<int>& arr){
    int n = arr.size() + 1;
    int result = n;

    for(int i = 0; i < arr.size(); i++){
        result ^= arr[i] ^ (i+1);
    }

    return result;

}

int main(){
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1};
    int res = missingNum(arr);
    cout <<"Missing number from N natural numbers is "<< res << endl;
    cout<<"Missing number using the single loop xor is "<<missingNumXor(arr)<<endl;
    return 0;
}