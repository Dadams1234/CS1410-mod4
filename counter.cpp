// file: counter.cpp
// Created by Daryl Adams on 9/21/17 for CS1410.
// Copyright (c) 2017 WSU

//


#include <iostream>

using namespace std;

// Constants, Structs, Classes
class Counter
{
private:
    unsigned int count;

public:
    // Constructor
    Counter(): count(100)
    {/*empty body */}
    void incCount()     // increment count
    {
        count++;
    }
    int getCount()      // return count
    {
        return count;
    }
};


// Prototypes



// Main Program Program

int main()
{
    Counter c1,c2;

    cout<< "c1 = "<<c1.getCount() <<endl;   // display
    c1.incCount();                 // increment c1
    cout<<"c1 = "<<c1.getCount() <<endl; // display

    cout<< "c2 = "<<c2.getCount() <<endl;   // display
    c2.incCount();                 // increment c2
    cout<<"c2 = "<<c2.getCount(); // display


    return 0;

}

// Function Definitions