#include <iostream>
#include "Q2.h"
using namespace std;

int* merge(int* a1, int* a2, int size1, int size2){
    int newSize = size1 + size2;
    int *outputArray = new int[newSize];
    for (int i=0; i < size1+1; i++){
        outputArray[i] = a1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        outputArray[i+size1-1] = a2[i];
    }

    return(outputArray);
}
