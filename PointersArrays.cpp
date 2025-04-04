#include <iostream>
using namespace std;

int main() {
    int numberArrays[5];

    int * pPointer = nullptr;

    //assigning address of the first element to the pointer
    pPointer = numberArrays;
    *pPointer = 10;
    
    //assigning address fo the second element to the pointer
    pPointer++;
    *pPointer = 20;

    //assigning address of the third element to the pointer
    pPointer = &numberArrays[2];
    *pPointer = 30;

    //assigning address of the fourth element using pointer arithmetic
    pPointer = numberArrays + 3;
    *pPointer = 40;
    
    pPointer = numberArrays;

    //assigning value to fifth element
    *(pPointer + 4) = 50;

    //iterate and output all the elements in the array
    for (int n = 0; n < 5; n++){
        cout << numberArrays[n] << ", ";
    }

    return 0;


}