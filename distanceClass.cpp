// file: distanceClass
// Created by Daryl Adams on 9/21/17 for CS1410.
// Copyright (c) 2017 WSU

//


#include <iostream>

using namespace std;
/* Task: Defince a class Distance
 * that stores int feet and float inches
 * Two methods: setDist -> capture input from user
 *              getDist -> set the information with customer input
 *              showDist -> Display values
 */
// Constants, Structs, Classes
class Distance
{
private:
    int feet;
    float inches;
public:
    void setDist(int f, float i)
    {
        int cm;

        cm = c;
        feet = f;
        inches = i;
    }
    void getDist() // get user input
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void showDist() //display information
    {
        cout <<" Feet "<<feet<<" and inches "<<inches<<endl;
    }
};


// Prototypes



// Main Program Program

int main(void)
{
    // Create an instance "instantiate" the class
    Distance d1, d2;
    // Use methods to set/access data
    d1.setDist(6, 6.5);
    cout<<"Dist 1"<<endl;
    d1.showDist();

    d2.getDist();
    cout<<"Dist 2" << endl;
    d2.showDist();


    return 0;

}

// Function Definitions