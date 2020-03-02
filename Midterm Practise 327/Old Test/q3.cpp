#include <string>
#include <iostream>
 
using namespace std;

void printEven(int numbers[], int numsize) {
    for(int i = 0; i < numsize; i++){
        if (numbers[i]%2==0)
        {
            cout << numbers[i] << endl;
        }
    }
}



int main(){
    int arrayLength = 10;
    int testArray[arrayLength] = {1,0,5,3,6,12,3,5,4,7};
    printEven(testArray, arrayLength);
}