#ifndef PRINTWRITER_HPP
#define PRINTWRITER_HPP


#include <fstream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>

#include "ColorChooser.hpp" 

using namespace std ;


class PrintWriter{

public:

// constructor 

PrintWriter(const string f , string cc , string charcolor,int delay) ;

~PrintWriter() ;

void printParagraphs();

void printParagraph(const vector<std::string>& paragraph) ;

private:

    std::string filename_;
    std::ifstream file_;
    int delay_;
    std::string color_; // Private variable to store the color string
    string charcc_ ;
protected:




} ;






#endif