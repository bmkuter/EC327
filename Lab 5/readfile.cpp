#include <string>
#include <fstream>
#include <iostream>
using namespace std;

//IMPLEMENT YOUR FUNCTION HERE
void readFiletoArray(string filename, int* data){
    string line;
    ifstream my_file(filename);
    if (my_file.is_open()){
        while (getline(my_file, line)){
            int i = 0;
            data[i] = stoi(line);
            cout << data[i] << endl;
            i++; 
        }
        my_file.close();
    } else{
        cout << "Can't open file." << endl;
    }
}

// int main() {
//     string myFile = "input_01.txt";
//     int myArray[10];
//     readFiletoArray(myFile, myArray);
// }