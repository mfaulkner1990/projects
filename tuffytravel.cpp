#include <iostream>
#include <string>

int main() {

  // Bus route string variables.
  std::string name_of_first_route;
  std::string name_of_second_route;
  std::string name_of_third_route;

  // Time integer variables.
  int time_of_first_route;
  int time_of_second_route;
  int time_of_third_route;

  // Welcome message & user input.
  std::cout "Welcome to TuffyTravel!" << std::endl;

  std::cout "Please enter the name of the 1st route: " << std::endl;
  std::getline (std::cin,name_of_first_route);

  std::cout "Please enter the name of the 2nd route: " << std::endl;
  std::getline (std::cin,name_of_second_route);

  std::cout "Please enter the name of the 3rd route: " << std::endl;
  std::getline (std::cin,name_of_third_route);

  return 0;
}




/*// extract to string
#include <iostream>
#include <string>

int main ()
{
  std::string name;

  std::cout << "Please, enter your full name: ";
  std::getline (std::cin,name);
  std::cout << "Hello, " << name << "!\n";

  return 0;
}*/
