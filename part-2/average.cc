
// Faizan Najmee
// najmeefaizan@csu.fullerton.edu
// @najmeefaizan
// Partners: @davidddd1


#include <iostream>
#include <string>
#include <vector>


int main(int argc, char* argv[]) {
 std::vector<std::string> arguments{argv, argv + argc};




 if (argc < 2) {
       std::cerr << "Error: At least one command line argument is required." << std::endl;
       return 1;
   }


 double total = 0.0;
 for (int i = 1; i < argc; ++i) {
       try {
           total += std::stod(arguments[i]);
       } catch (const std::invalid_argument& e) {
           std::cerr << "Error: Invalid argument found - " << arguments[i] << std::endl;
           return 1;
       } catch (const std::out_of_range& e) {
           std::cerr << "Error: Out of range argument found - " << arguments[i] << std::endl;
           return 1;
       }
   }


 double average = total / (argc - 1);
 std::cout << "average = " << average << std::endl;


   return 0;
}
