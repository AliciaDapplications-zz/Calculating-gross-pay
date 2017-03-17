//
//  main.cpp
//  Calculating-gross-pay
//
//  Created by Alicia Dale on 2/25/16.
//  Copyright © 2016 Alicia Dale. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    //declare constant and variables
    const int PAY_RATE = 10;
    int hoursWorked = 0;
    int grossPay = 0;
    
    //enter input items
    cout <<"Hours worked (0-40): ";
    cin >> hoursWorked;
    
    //calculate and display output
    if (hoursWorked >= 0 && hoursWorked <= 40)
    {
        grossPay = hoursWorked * PAY_RATE;
        cout << "Gross pay: $" << grossPay << endl;
    }
    else
        cout << "Incorrect number of hours" << endl;
    //end if
    
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
