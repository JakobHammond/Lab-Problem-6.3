//
//  main.cpp
//  p6-3
//
//  Created by Jakob Hammond on 10/3/23.
//

#include <iostream>
#include <sstream>
using namespace std;

int main(void){
    double average;
    int countValues = 0;
    double standardDeviation;
    double currentValue;
    double total = 0;
    double currentSummation = 0;
    stringstream userinput;
    
    cout << "Enter numbers - Q to quit: ";
    
    
   
    while(cin >> currentValue){
        countValues++;
        total += currentValue;
        userinput << currentValue;
        userinput << " ";
        
            }
    average = total / countValues;
    
    while(userinput >> currentValue){
        
        
        currentSummation += (currentValue - average) * (currentValue - average);
        
    }
    standardDeviation = sqrt((currentSummation) / (countValues - 1));
    
    
   
   
    if(countValues == 0){
        cout << "No data to process - exiting...Press any key to continue . . ." << endl;
    }
    else{
        cout << "n = " << countValues << ", average = " << average << ", standard deviation = " << standardDeviation << endl;
    }
    
}
