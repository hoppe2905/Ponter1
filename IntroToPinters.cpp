#include <iostream>
using namespace std;

int main(){
    
    //declaring and initializing pointer
    int* pPointer = nullptr;

    int integerVar = 5;

    //assigning address to object
    pPointer = &integerVar;

    //output the value of integer value
    cout << "intergerVar: " << integerVar << endl;

    //output the address of the integerVar
    cout << "Address of the integerVar:" << &integerVar << endl;

    //output the address assigned to pPointer
    cout << "pPointer: " << pPointer << endl;\

    //output the address of pPointer
    cout << "Address of pPointer" << &pPointer << endl;
    
    return 0;

}