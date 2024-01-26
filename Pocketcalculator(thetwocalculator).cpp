// The two number calculator 
#include <iostream>
#include <iomanip>

int main() {
  double input1, input2;
  std :: cout << "This is the two number calculator! " << "You can do four operations of two numbers here. Just enter a number: " << " \n" ;
  std::cin >> input1; 
  std :: cout << "Enter another number: " ;
     std::cin >> input2; 
  
   std::cout  <<   std::fixed << std::setprecision(2) << "What is " << input1 <<  " plus " << input2  << " ? " << input1 + input2 <<  " \n";
   std::cout  <<   std::fixed << std::setprecision(2) <<  "What is "  << input1 <<  " minus " << input2  << " ? "<< input1 - input2 <<  " \n";
   std::cout  <<   std::fixed << std::setprecision(2) << "What is " << input1 <<  " times " << input2  << " ? " << input1 * input2 <<  " \n";
   std::cout <<   std::fixed << std::setprecision(2) << "What is " << input1 <<  " divided by " << input2  << " ? " << input1 / input2 <<  " \n";
  return 0 ; 
}
