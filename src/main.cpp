/*
#include "ColorChooser.cpp"
#include "PrintWriter.cpp"

*/

#include "../include/ColorChooser.hpp"
#include "../include/PrintWriter.hpp"

int main()
{

    string colortext;

    // you can adjust delay here 

    int delay = 20;

    //ColorChooser *m_colorchooser = new ColorChooser(); // create a pointer to the class 
    
    /* Use of auto  with uniquepointers instead */

    auto p = make_unique<ColorChooser>(); 

    // set up colors for printing now create new instance of  PrintWriter
     
    // method shows user a color menu to select color of text printed 
    p->setColor();

     // create a pointer that points to the Printwriter class

    auto pw = make_unique<PrintWriter>("check.txt",p->getColorSet(),p->getColorchars(),delay);
    
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
