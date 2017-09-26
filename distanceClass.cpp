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
    // Every object shares this variable
    static int count;   //  one variable per CLASS
public:
    // constructor with no arguments
    Distance(): feet(0), inches(0)
    {
        count++;
    }

    voidsetDist(int f, float i)
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
    Distance add_dist_tome(Distance d1);
    int getCount()
    {
        return count;
    }
};
int Distance::count = 0;

// Prototypes



// Main Program Program

int main(void)
{
    // Create an instance "instantiate" the class
    Distance d1, d4;
    cout<<"\nd1 = ";
    d1.showDist();
    cout<<"Count is "<< d1.getCount() << endl;
    Distance d2(8, 2);
    Distance d3(2, 4);
    cout<<"\nd2 = ";
    d2.showDist();
    cout<<"\nd3 = ";
    d3.showDist();
    cout<<"\nD4 = ";
    d4.showDist();

    d4.add_dist_tome(d2);
    cout<<"\nd4 new = ";
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
Distance Distance::add_dist_tome(Distance d1)
{
    Distance temp;
    temp.inches = inches +d1.inches;
    if(temp.inches >= 12.0)
    {
        temp.inches -= 12.0;
        //temp.feet = 1
        temp.feet += 1;

    }
    temp.feet += feet +d1.feet;

    return temp;
}
