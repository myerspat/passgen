#include <iostream>
#include <string>
#include "utility/fileInteraction.hpp"

int main () {
  // Prompt user to select what they want to do.
  std::cout << std::endl << "Select what you would like to do," << std::endl << std::endl;
  
  std::cout << "1. Create password file" << std::endl;
  std::cout << "2. Create and write new password" << std::endl;
  std::cout << "3. Write existing password" << std::endl;
  std::cout << "4. Recall existing password" << std::endl << std::endl;
  
  std::cout << "Select 1,2,3, or 4: ";
  
  int response;
  std::cin >> response;

  // Retrieve file path
  std::string fileName;
  std::cout << "Provide relative file path: ";
  std::cin >> fileName;

  bool cont = true;
  while (cont == true) {
    if (response == 1) {
         
    } else if (response == 2) {

    } else if (response == 3) {

    } else if (response == 4) {

    } else {
      throw std::runtime_error("Error: Input given does not match options");
    }
  }

  return 0;
}
