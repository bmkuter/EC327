#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int bin(int n, int k){
    if (k != 0 || k != n){
        return (bin(n-1, k-1) + bin(n-1,k));
    }
    else{
        return(1);
    }
}

int main(){
    return(0);
}