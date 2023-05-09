#include "../include/ColorChooser.hpp"
#include "../include/PrintWriter.hpp"

PrintWriter::PrintWriter(const string fname, string cc,string charcolor, int delay)
    : filename_{fname}, file_{fname}, delay_{delay}, color_{cc} ,charcc_{charcolor}
{
    if (!file_)
    {
        throw std::runtime_error{"Failed to open file: " + filename_};
    }
    cout << "Color selected was : " << color_ << "\n"
         << "File chosen was : " << filename_ << "\n"
         << "Delay set to : " << delay_ << "\n"
         << endl;
}

PrintWriter::~PrintWriter()
{
    cout << "In  destructor  PrintWriter class , cleaning up" << endl;
}

void PrintWriter::printParagraphs()
{
    vector<std::string> paragraph;
    string line;
    while (std::getline(file_, line))
    {
        if (line.empty())
        {
            if (!paragraph.empty())
            {
                printParagraph(paragraph);
                paragraph.clear();
            }
        }
        else
        {
            paragraph.push_back(line);
        }
    }
    if (!paragraph.empty())
    {
        printParagraph(paragraph);
    }
}

void PrintWriter::printParagraph(const vector<std::string> &paragraph)
{
    
    
      if (paragraph.empty()) {
            return;
      }
    cout << endl ;

    for (const auto &line : paragraph)
    {
        
        for (const auto &c : line)
        {
            cout << charcc_ << c << "\033[0m"  << flush;
            this_thread::sleep_for(std::chrono::milliseconds(delay_));
        }
        cout << endl;
    }
    cout << "Enter for next paragraph"  << std::flush;
    
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
