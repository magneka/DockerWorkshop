// C++ program to display "Hello World"
  
// Header file for input output functions
#include <iostream>
using namespace std;

// Variable declaration:
extern int a, b;
extern int c;
extern float f;
  
// Main() function: where the execution of program begins
int main()
{
   // Variable definition:
   int a, b;
   int c;
   float f;
 
   // actual initialization
   a = 10;
   b = 20;
   c = a + b;
 
   cout << c << endl ;

   f = 70.0/3.0;
   cout << f << endl ;

    // prints hello world
    std::cout << "Hello World\n\n";
  
    return 0;
}