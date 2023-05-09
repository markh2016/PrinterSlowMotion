# PrinterSlowMotion

A C++ implementation that will take  a text file seperate parargraphs and  print each line of paragraph in slow motion and in chosen color to terminal  requesting a prompt from user to print next paragraph 

Built on debian 11 / 12 Linus so  you may have to make alterations  to suit your OS 
To identify  your system os on linux is  easy 
open a terminal in in that terminal type uname -a 

This  is what is returned on my system , "Linux debone 6.1.0-8-amd64 #1 SMP PREEMPT_DYNAMIC Debian 6.1.25-1 (2023-04-22) x86_64 GNU/Linux


To compile this should peresent no problems  or we hope so put it that way 
Make sure  you have cmake  and latest g++ compilers lib installed 

You can either use synaptic to install or  from terminal  (CTRL+ ALT +T )  then issue 

sudo apt update 
sudo apt install gcc 

After downloading files  and unzipping to  your home area  do the following 
open a terminal  (CTRL + ALT +T ) 
cd into where you downlaoded files too 

Next 
Type the following  in that terminal 
cmake -S . B build_files and press enter 
You will see this returned to your terminal all being well 

-- The C compiler identification is GNU 12.2.0
-- The CXX compiler identification is GNU 12.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found g++: /usr/bin/c++
-- Configuring done
-- Generating done
-- Build files have been written to: <YOUR HOMEAREA> /PrinterWriteSlowMotion/build_files

From the same terminal  type the following 

cd <YOUR HOMEAREA> /PrinterWriteSlowMotion/build_files and press enter 
type ls to see if file creation and Makefile are present 

If so all  is well 

Next in that same terminal type make and then press enter 

If this is all working then  you will see the following returned 

Or similar 

[ 25%] Building CXX object CMakeFiles/PrintWriter.dir/src/ColorChooser.cpp.o
[ 50%] Building CXX object CMakeFiles/PrintWriter.dir/src/PrintWriter.cpp.o
[ 75%] Building CXX object CMakeFiles/PrintWriter.dir/src/main.cpp.o
[100%] Linking CXX executable /home/mark/C++Projects/PrinterWriteSlowMotion/dist/PrintWriter
[100%] Built target PrintWriter


From the same terminal  type  the followng

cd ../dist

This will take you to the dist folder where  your exe is placed 

You can alter the file as and how you please named check.txt  or  if you want to change the inmput file  then you will need to go into 
the src folder and alter line 32  which reads  as follows 

auto pw = make_unique<PrintWriter>("check.txt",p->getColorSet(),p->getColorchars(),delay);

In the above line you will see the filename passed to this within the inverted commas 
Change this to suite your input file Please not only ascii utf-8  at present (Im also learning so I dont posess to be some marvelous expert Im not )

To run this exe in the dist folder do issue this command ~
./PrintWriter 

Enjoy !! 
