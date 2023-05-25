#include <iostream>
#include "polygon.h"
#include "rectangle.h"
#include "RightTriangle.h"

using namespace std;

int main() {
    // Create a rectangle object using the default constructor
    RightTriangle Rtri1;
    cout << "Created Right Triangle 1" << Rtri1 << endl;

    float base = Rtri1.GetBase();
    float altitude = Rtri1.GetAltitude();
    float hypothenuse = Rtri1.GetHypotenuse();
    cout << "Right Triangle 1 - Width: " << base << ", Length: " << altitude << ", Hypothenuse: " << hypothenuse << endl;

    // Create a rectangle object using the init constructor
    RightTriangle Rtri2(5.0f, 10.0f);
    cout << "\nCreated Right Triangle 2" << Rtri2 << endl;

    base = Rtri2.GetBase();
    altitude = Rtri2.GetAltitude();
    hypothenuse = Rtri2.GetHypotenuse();
    cout << "Right Triangle 2 - Width: " << base << ", Length: " << altitude << ", Hypothenuse: " << hypothenuse << endl;

    // Test the area and perimeter methods from the Polygon base class
    cout << "\nArea of Right Triangle 2 (via Polygon): " << Rtri2.GetArea() << endl;
    cout << "Perimeter of Right Triangle 2 (via Polygon): " << Rtri2.GetPerimeter() << endl;

    // Test the getters and setters from the Rectangle class
    Rtri2.SetBase(7.0f);
    Rtri2.SetAltitude(14.0f);
    cout << "\nRight Triangle 2 - New Width: " << Rtri2.GetBase() << ", New Length: " << Rtri2.GetAltitude() << ", New Hypothenuse: " << Rtri2.GetHypotenuse() << endl;

    // Test the copy constructor and assignment operator from the Rectangle class
    RightTriangle Rtri3(Rtri2);
    cout << "\nRight Triangle 3 (Copy of Right Triangle 2) - Width: " << Rtri3.GetBase() << ", Length: " << Rtri3.GetAltitude() << ", Hypothenuse: " << Rtri3.GetHypotenuse() << endl;

    RightTriangle Rtri4;
    Rtri4 = Rtri3;
    cout << "\nRight Triangle 4 (Assignment from Right Triangle 2) - Base: " << Rtri4.GetBase() << ", Altitude: " << Rtri4.GetAltitude() << ", Hypothenuse: " << Rtri4.GetHypotenuse() << endl;

    // Test the drawing method from the Rectangle class
    Rtri4.Draw();

    // Test the debug and serialization methods from the Rectangle class
    Rtri2.ErrorMessage("Test Error message");
    Rtri2.WarningMessage("Test Warning message");
    Rtri2.Dump();

    return 0;
}