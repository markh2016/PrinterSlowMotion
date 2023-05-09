/*
#include "ColorChooser.cpp"
#include "PrintWriter.cpp"

*/

#include "../include/ColorChooser.hpp"
#include "../include/PrintWriter.hpp"

#include <string>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

// this function remove the "./" from file listing 

string formatString(const std::string& str1) {
    std::string formatted_str1 = str1.substr(2);  // remove "./" prefix
    
    return "\"" + formatted_str1 + "\" " ;
}




string OpenDirectory() {
   
    /* The .  implies current directory */
    
    string path = "." , myfile ;


    cout << endl << "Listing files In current Directory " << endl << endl;
    for (const auto & entry : fs::directory_iterator(path))

    // call function to remove the "./" chars 


    cout <<formatString( entry.path()) << endl;
    cout << "Copy and past  the file  you want  from the listing in terminal" << endl <<
    "at next prompt then press enter"  << endl  ;
    cout <<"Past file name after : " ;
   
    cin >> myfile  ;

    return myfile ; 
}


int main()
{


    // list all  files  call OpenDirectory function

   string filename = OpenDirectory() ;

    
    

    // you can adjust delay here 

    int delay = 20;

    //ColorChooser *m_colorchooser = new ColorChooser(); // create a pointer to the class 
    
    /* Use of auto  with uniquepointers instead */

    auto p = make_unique<ColorChooser>(); 

    // set up colors for printing now create new instance of  PrintWriter
     
    // method shows user a color menu to select color of text printed 
    p->setColor();

     // create a pointer that points to the Printwriter class

    auto pw = make_unique<PrintWriter>(filename,p->getColorSet(),p->getColorchars(),delay);
    
    /*
    PrintWriter *m_printer = new PrintWriter("check.txt", p->getColorSet(),p->getColorchars() , delay);

    */

    // call method to print paragraphs 
    pw->printParagraphs();

      
    
   /* 

    clean up when using  original pointers 
   
    delete m_colorchooser;

    delete m_printer ;

    */

    return 0;
}
