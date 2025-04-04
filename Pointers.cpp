#include <iostream>
using namespace std;

int main(){
    int firstValue;
    int secondValue;

    int * pPointer = nullptr;

    //assign pointer with the address of the firstValue
    pPointer = &firstValue;
    *pPointer = 10;

    //assign pointer with the address of the secondValue
    pPointer = &secondValue;
    *pPointer = 20;

    cout << "firstValue is " << firstValue << '\n';
    cout << "secondValue is " << secondValue << '\n';

    return 0;

}