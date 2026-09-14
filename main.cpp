#include <iostream>
#include <string>

// Homework 3 — Raymundo Lugardo
// CIS 5 Week 03 · Types & variables
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
  const int CURRENT_YEAR = 2026;

  std::cout << "=== About me ===\n";
  std::string name = "Raymundo Lugardo";
  cout << "Name:" << name << endl;
  
  //Int
 
  // I chose int  for both age and credit because it allows for whole numbers.
  int Age = 26;
  cout << "Age:" << Age <<endl;
  
  //double
 
  // double allows for me to use use whole numbers and decimals and has a large size
  double height_m = 1.78;
  cout << "Height(m): " << height_m <<endl;
 
  //char
  //char only allows me to to use a single letter or digit so Thats why I  chose it for intial
  
  char intial = 'R';
  cout << "Inital:" << intial << endl;
  
  //bool
 //bool can only be between true or false leading to 1 or 0 as the output
  bool student = true;
  cout << "Student:" << student << endl;
 
  int credits = 31;
  cout << "Credits:" << credits << endl;
  //float
 //  float allows me to to choose values within the decimal range but has less soace than double
  float GPA = 3.334;
  cout << "GPA:" << GPA << endl;

// I kept  the same year using constant 
  cout << "Year:" << CURRENT_YEAR << endl;

  std::string text = "Hello, my name is Raymundo, I am taking 9 credits in 2026 but I plan taking more next semester. I am enjoying learning about coding and new softwares.";
  cout << text << endl;



  // TODO: labeled lines from the names
  // TODO: one short paragraph from those same names — not leftover quotes

  // TODO: change one value from a first choice. Comment the old value,
  // the new value, and why the console followed.

  // TODO: two lines that would not compile — leave them commented
  // Example shape (write your own, with the reason):
  // int age = "nineteen";   // would not compile — ...
  // CURRENT_YEAR = 2027;    // would not compile — ...


  return 0;
}

//I was able to elanr to write this code assigning values I had two double commands but changed it to float as they are both able to run values within the decimal range.





//warning: multi-character character constant [-Wmultichar]                                                                                //wouldnot compile - char is only able to gold one value althought program runs it shows the intial at 0
// 33 |   char intial = '20'
//main.cpp: In function ‘int main()’:
//main.cpp:33:17: warning: overflow in conversion from ‘int’ to ‘char’ changes value from ‘12848’ to ‘48’ [-Woverflow]





// error: cannot convert ‘const char*’ to ‘double’ in initialization                                                                       //would not compile - Similar to char double expects a decimal values and I put a string so it is not able to read it.
//  27 |   double height_m = "five foot ten"  const char*