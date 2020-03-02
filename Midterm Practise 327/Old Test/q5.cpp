#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int transcript(string first, string last){
    string inFile = "grades.txt", inFirst, inLast, course, grade, outFile = "transcript.txt";
    fstream input;
    ofstream output;
    int nameCheck = 0;
    input.open(inFile);
    output.open(outFile);

    while(input >> inFirst >> inLast >> course >> grade){
        if((inFirst == first) && (inLast == last)){
            nameCheck++;
            output << course<< " " << grade <<endl;
        }
    }
    if(nameCheck != 0){
        return(0);
        input.close();
        output.close();
    }
    else{
        return(-1);
    }
    return(1);
}

int main(){
    cout << transcript("John", "Doe") << endl;
    return(0);
}