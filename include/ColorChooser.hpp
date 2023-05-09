#ifndef COLORCHOOSER_HPP
#define COLORCHOOSER_HPP
#include <string>
#include <iostream>


using namespace std ;

class ColorChooser {
public:
    // Constructor
    ColorChooser();

    // Destructor
    ~ColorChooser();

    // Method to present user with a menu of colors to pick from using ansi escape sequences
    void setColor();
    string getColorSet() ;

    string getColorchars();
   
    
   
private:
    string  _reset;
    string  _colourchars ;
    string  _COLOR ;
};

#endif // COLORCHOOSER_HPP
