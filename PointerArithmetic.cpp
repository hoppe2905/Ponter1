#include <iostream>
using namespace std;

int main() {
    
    //null pointer
    int* pPointer = nullptr;
     
     int numbersArray[3] = {10, 20, 30};

     // assign address to first element
     pPointer = numbersArray;

     //output the address of the first element
     cout << "Address at  pPointer: " << pPointer << endl;
     cout << "Address of numbersArray[0]: " << numbersArray << endl;

     //assign address of first element to pointer 
     pPointer = numbersArray;

     //This outputs the value of the first element
     cout << "Value at pPointer++: " << *(pPointer++) << endl;

     return 0;


}