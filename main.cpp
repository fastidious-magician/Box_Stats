// BOX STATS V0.7...BEWARE OF ATRRENDOUS FORMATTING
//This program will give lots of stats about your box given length, width, and height.
//will add looping option for more boxes...and defaults for invalid inputs to keep from crashing :)
// POSSIBLE BUG: Total Perimeter OVERFLOW
// Date: 01-31-16

#include <iostream>
using namespace std;
int main()
{
    // variable initializations

    double length = 0;
    double width = 0;
    double height = 0;

    float volume = 0;
    float areaT = 0;				// area of top surface
    float areaS = 0;				// area of side surfaces
    float areaF = 0;				// area of front surface

    float perimeterT = 0;			// perimeter of top/bottom sides
    float perimeterS = 0;			// perimeter of side faces
    float perimeterF = 0;			// perimeter of front face

    float combinedareaTB = 0;       //combined area stats
    float combinedareaFB = 0;
    float combinedareaLR = 0;       // (left/right)

    float combinedperimeterTB = 0;  // (sums of perimeters each involved face)
    float combinedperimeterFB = 0;
    float combinedperimeterLR = 0;

    long long totalarea = 0;
    long long totalperimeter = 0;


    cout << "             **WELCOME TO BOX STATS v0.7!**              " << endl;
    cout << "             Copyright 2143 Matthew Routon               " << endl;
    cout << " " << endl; // spacer
    cout << "# Type in the the length, width, and height of the box  #" << endl;		//question
    cout << "# and press ENTER after each number to receive some     #" << endl;
    cout << "# miscellaneous stats on said box.                      #" << endl;
    cout << " " << endl; // spacer
    //                                                      //
    cout << "///////////////////////INPUT DATA////////////////////////" << endl; //BEWARE OF ATRRENDOUS FORMATTING

    cout << "                        Length: ";			// user inputs
    cin >> length;

    cout << "                        Width:  ";
    cin >> width;

    cout << "                        Height: ";
    cin >> height;

    cout << "/////////////////////////////////////////////////////////" << endl;
    // variable definitions
    //                                                        //
    volume = (length * width * height);

    areaT = (length * width);                                         // top
    areaS = (length * height);                                        // side
    areaF = (width * height);                                         // front
    //
    perimeterT = (2 * length) + (2 * width);
    perimeterS = (2 * length) + (2 * height);                         //
    perimeterF = (2 * width) + (2 * height);

    combinedareaTB = (2 * areaT);                           // For summation Stats
    combinedareaFB = (2 * areaF);
    combinedareaLR = (2 * areaS);

    combinedperimeterTB = (2 * perimeterT);
    combinedperimeterFB = (2 * perimeterF);
    combinedperimeterLR = (2 * perimeterS);

    totalarea = (combinedareaFB + combinedareaLR + combinedareaTB);
    totalperimeter = (combinedperimeterFB + combinedperimeterLR + combinedperimeterTB);


    //                                                        //
    cout << " " << endl;	//spacer

    cout << "                     Volume (Units^3):................ " << volume << endl;
    cout << "                     Total Perimeter:................. " << totalperimeter << endl;
    cout << "                       Total Area:.................... " << totalarea << endl;

    cout << " " << endl; // spacer

    cout << "                   AREA STATS (Units^3)                " << endl; // title
    cout << " Area of a single top or bottom surface:..............." << areaT << endl;
    cout << " Area of a single side surface:........................" << areaS << endl;
    cout << " Area of a single front or back surface:..............." << areaF << endl;

    cout << " " << endl;  // spacer

    cout << "                      PERIMETER STATS                     " << endl; //title
    cout << " Perimeter of a single top or bottom surface:.........." << perimeterT << endl;
    cout << " Perimeter of a single side surface:..................." << perimeterS << endl;
    cout << " Perimeter of a single front or back surface:.........." << perimeterF << endl;

    cout << " " << endl; // spacer

    cout << "                 SUMMATION OF AREAS STATS              " << endl;
    cout << "Combined Area of Top and Bottom:...................... " << combinedareaTB << endl;
    cout << "Combined Area of Left and Right....................... " << combinedareaLR << endl;
    cout << "Combined Area of Front and Back....................... " << combinedareaFB << endl;

    cout << " " << endl; // spacer

    cout << "               SUMMATION OF PERIMETERS STATS           " << endl;
    cout << "Combined Perimeter of Top and Bottom.................. " << combinedperimeterTB << endl;
    cout << "Combined Perimeter of Left and Right.................. " << combinedperimeterLR << endl;
    cout << "Combined perimeter of Front and Back.................. " << combinedperimeterFB << endl;

    cin.clear();
    cin.ignore();
    cin.get();

    return 0;
}
