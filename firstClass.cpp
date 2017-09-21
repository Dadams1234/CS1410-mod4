/* class <label>       Data Hidin
 * {
 *      private:
 *                         methods
 *                       setter: update/set data
 *                       getters: Get/Display/Accessdata
 *
 *      public:
 *
 * }
 */

#include <iostream>
using namespace std;
class smallobj                      /* Define class */
{
private:
    int somedata;                    // class data

public:
    void setdata(int d)             // Member finction to set data
    {
        somedata = d;
    }

    void showdata()                 // Member function to display/get data
    {
        cout<<"Data is "<< somedata << endl;
    }
};
int main()
{
    // Create a instance or a member of the class
    smallobj s1, s2;
    // ERROR: You cannot access your data directly,
    // Need to use an access method.
    // cout << "Some data is" <<s1.somedata <<endl;
    // Set my data
    // Dot operator -> class member access operator
    s1.setdata(123);
    s2.setdata(456);
    // Show your data
    s1.showdata();
    return 0;
}