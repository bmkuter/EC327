#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int findMax(){
    string date, city;
    signed int maxTemp, previousTemp, currentTemp;
    string line;
    ifstream my_file("temperatures.txt");
    if (my_file.is_open()){
        while(my_file >> date >> city >> currentTemp){
            if (currentTemp > previousTemp)
            {
                maxTemp = currentTemp;
            }
            previousTemp = currentTemp;
        }
        
    }
    return (maxTemp);
}

float findAvg(string city){
    string date, inCity; 
    int increment = 0;
    signed int temp;
    string line;
    float avgTemp;
    ifstream my_file("temperatures.txt");
    if (my_file.is_open()){
        while(my_file >> date >> inCity >> temp){
            if (inCity == city){
                increment++;
                avgTemp += temp;
            }
        }
        return (avgTemp = avgTemp / increment);
    }
}