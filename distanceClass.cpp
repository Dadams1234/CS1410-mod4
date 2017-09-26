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
    // constructor with no arguments
    Distance(): feet(0), inches(0)
    {/*empty body*/}
    /* Constructor with two arguments */
    Distance(int ft, float in): feet(ft), inches(in)
    {/*empty body*/}

    void setDist(int f, float i)
    {
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
    void add_dist(Distance d1, Distance d2);

};


// Prototypes



// Main Program Program

int main(void)
{
    // Create an instance "instantiate" the class
    Distance d1, d4;
    d1.showDist();

    Distance d2(8, 2);
    d2.showDist();
    cout<<"\nd3 = ";
    Distance d3(2, 4);
    cout<<"\ndD3 = ";
    d3.showDist();
    d4.add_dist(d2, d3);
    cout<<"\nD4 = ";
    d4.showDist();

    // Use methods to set/access data




    return 0;

}

// Function Definitions
/* Belongs to the class. A method for members only
 * Template: type CLASSNAME::FUNCTION_name()
 * The scope resolution operator
 * 1) Dclare prototype inside class
 * 2) Definiton is outside class
 * 3) Use the scope resolution opperator ::*/
void Distance::add_dist(Distance d1, Distance d2)
{
    inches = d1.inches + d2.inches; // add inches
    feet = 0;
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;                 // check for extra foot
    }
    feet += d1.feet + d2.feet;  // add feet
}