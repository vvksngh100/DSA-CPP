#include<iostream>
using namespace std;

class Array{
    private:
        int* A;
        int size;
        int length;
    public:
        Array(int size, int length){
            this->size = size;
            this->length = (length <= size) ? length : size;
            A = new int[size];

            for(int i = 0; i < size; i++){
                A[i] = 0;
            }
        }

        // Set element at specific index
        void Set(int element, int index){
            if(index >= 0 && index < length){
                A[index] = element;
            }
        }

        // Getter
        int Get(int index) const{
            if(index >=0 && index < length){
                return A[index];
            }
            return -1;
        }

        // Display method
        void display() const{
            for(int i = 0; i < length; i++){
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }





        Array Union(Array& B){
            Array C(length + B.length, length + B.length);
            
            int index = 0; 
            for(int i = 0; i < length; i++){
                C.Set(A[i], index++);
            }

            for(int i = 0; i < B.length; i++){
                bool found = false;
                for(int j = 0; j < index; j++){
                    if(C.Get(j) == B.A[i]){
                        found = true;
                        break;
                    }
                }
                if(!found){
                    C.Set(B.A[i], index++);
                }
            }

            C.length = index;
            return C;
        }

        // Destructor
        ~Array(){
            delete [] A;
        }
};

int main(){
      // Create and fill first array
    Array arr1(10, 5);
    cout << "Array 1:" << endl;
    arr1.Set(3, 0);
    arr1.Set(7, 1);
    arr1.Set(2, 2);
    arr1.Set(9, 3);
    arr1.Set(5, 4);
    arr1.display();
    
    // Create and fill second array
    Array arr2(10, 4);
    cout << "\nArray 2:" << endl;
    arr2.Set(4, 0);
    arr2.Set(7, 1);
    arr2.Set(6, 2);
    arr2.Set(2, 3);
    arr2.display();
    
    // Demonstrate Union
    cout << "\nUnion of Array 1 and Array 2:" << endl;
    Array unionResult = arr1.Union(arr2);
    unionResult.display();
    return 0;
}