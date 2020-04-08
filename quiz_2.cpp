//
//  main.cpp
//  Quiz2
//
//  Created by Lucas Dahl on 4/8/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // properties
    double studentOneTestScore = 85;
    double studentTwoTestScore = 86;
    double studentThreeTestScore = 92;
    double averageTestScore = (studentOneTestScore + studentTwoTestScore + studentThreeTestScore) / 3;
    string message = "\nThe average test score of the three students is " + to_string(averageTestScore) + "\n";
    
    // Print the message that contains the average student test score
    cout << "Student 1: " << studentOneTestScore << endl;
    cout << "student 2: " << studentTwoTestScore << endl;
    cout << "Student 3: " << studentThreeTestScore << endl;
    cout << "Average: " << averageTestScore << endl;
    cout << message;
    
    
    
    // End the program
    return 0;
    
}
