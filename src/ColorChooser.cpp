#include "../include/ColorChooser.hpp"


ColorChooser::ColorChooser()
{
    cout << "In constructor" << endl ;
}

ColorChooser::~ColorChooser()
{
    cout << "In destructor of ColorChooser class , cleaning up " << endl <<
    "Code written by MD Harrington date 09/05/2023" << endl <<
    "FaceBook https://www.facebook.com/mark.harrington.14289/" << endl <<
    "Instagram https://www.instagram.com/markukh2021/" << endl ;

}

void ColorChooser::setColor()

{

        cout << endl ;
        cout << "Choose a color:" << endl;
        cout << "\033[30m 1. Black \033[0m" << endl;
        cout << "\033[31m 2. Red \033[0m" << endl;
        cout << "\033[33m 3. Yellow \033[0m" << endl;
        cout << "\033[34m 4. Blue \033[0m" << endl;
        cout << "\033[35m 5. Magenta \033[0m" << endl;
        cout << "\033[36m 6. Cyan \033[0m" << endl;
        cout << "\033[37m 7. White \033[0m" << endl;
        cout << "\033[0m 8. Reset \033[0m" << endl;

        int choice;
        cout << "Enter choice :" ;
        cin >> choice;
        

        switch (choice)
        {
       
        case 1:
            _COLOR = "\033[30mBlack\033[0m";
                _colourchars = "\033[30m" ;
            break;
        case 2:
            _COLOR = "\033[31mRed\033[0m";
                _colourchars = "\033[31m" ;
            break;
        case 3:
            _COLOR = "\033[33mYellow\033[0m";
                  _colourchars = "\033[33m" ;
            break;
        case 4:
            _COLOR = "\033[34mBlue\033[0m";
                  _colourchars = "\033[34m" ;
            break;
        case 5:
            _COLOR = "\033[35mMagenta\033[0m";
                    _colourchars = "\033[35m" ;
            break;
        case 6:
            _COLOR = "\033[36mCyan\033[0m";
                     _colourchars = "\033[36m" ;
            break;
        case 7:

             _COLOR = "\033[37mWhite\033[0m";
                     _colourchars = "\033[37m" ;
            break;

        case 8:

             _COLOR = "\033[0mReset\033[0m";
                    _colourchars = "\033[0m" ;
            break ;

        default:
            cout << "Invalid choice. Please choose a number between 1 and 8." << endl;
            setColor();
        }
}

string ColorChooser::getColorchars()
{
   return _colourchars ;

}

string ColorChooser::getColorSet()
{
        return _COLOR ;
}
