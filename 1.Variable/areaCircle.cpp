#include <iostream>
using namespace std;

int main()
{
    const double pie = 3.147; // This how to declare a constant variable
    double r, dAreaCircle;
    

    cout << "Enter the radis of a circle: ";
    cin >> r;
    dAreaCircle = pie * r * r;
    cout << "Area of your circle is " << dAreaCircle << endl;
}