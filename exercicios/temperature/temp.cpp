#include <iostream>
using namespace std;

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  cout << "Enter the temperature in Fahrenheit: ";
  cin >> tempf;

  tempc = (tempf - 32) / 1.8;
  
  cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}