/* Problems:
1 - Figuring out how to decide which buses are best and how the program will decide that.
2 - What to do when the choices were equal, two applied, none worked.
3 - Working with getline and cin. Having to research   std::cin.ignore(256, '\n');.
4 - Original algorithm didn't give a single answer
9/15/19*/

#include <iostream>
#include <string>

int main() {

  // Bus route string variables.
  std::string name_of_first_route;
  std::string name_of_second_route;
  std::string name_of_third_route;

  // Time integer variables.
  int time_of_first_route = 0;
  int time_of_second_route = 0;
  int time_of_third_route = 0;
  int desired_time_to_leave = 0;

  // To calculate difference from teh desired time.
  int difference_from_desired_time_to_first_route = 0;
  int difference_from_desired_time_to_second_route = 0;
  int difference_from_desired_time_to_third_route = 0;

  // Welcome message.
  std::cout << "Welcome to TuffyTravel!"
            << std::endl;

  // First route input.
  std::cout << "Please enter the name of the 1st route: ";
  std::getline (std::cin,name_of_first_route);
  std::cout << "Please enter the departure time of the 1st route: ";
  std::cin >> time_of_first_route;
  std::cout << std::endl;

  // Second route input.
  std::cout << "Please enter the name of the 2nd route: ";
  std::cin.ignore(256, '\n');
  std::getline (std::cin,name_of_second_route);
  std::cout << "Please enter the departure time of the 2nd route: ";
  std::cin >> time_of_second_route;
  std::cout << std::endl;

  // Third route input.
  std::cout << "Please enter the name of the 3rd route: ";
  std::cin.ignore(256, '\n');
  std::getline (std::cin,name_of_third_route);
  std::cout << "Please enter the departure time of the 3rd route: ";
  std::cin >> time_of_third_route;
  std::cout << std::endl;

  // Desired time to leave input.
  std::cout << "Please enter the time you wish to leave: ";
  std::cin >> desired_time_to_leave;
  std::cout << std::endl;

  //Calculations for differences.
  difference_from_desired_time_to_first_route = (time_of_first_route - desired_time_to_leave);
  difference_from_desired_time_to_second_route = (time_of_second_route - desired_time_to_leave);
  difference_from_desired_time_to_third_route = (time_of_third_route - desired_time_to_leave);

  //If they all leave at the desired time or later.
  if ((difference_from_desired_time_to_first_route >= 0) && (difference_from_desired_time_to_second_route >= 0) && (difference_from_desired_time_to_third_route >= 0))
        {std::cout << "You can take any bus, they all leave after the time you specified." << std::endl;}
  //If only the first and second leave at the desired time or later.
  else if ((difference_from_desired_time_to_first_route >= 0) && (difference_from_desired_time_to_second_route >= 0) && (difference_from_desired_time_to_third_route < 0))
        {std::cout << "You should probably take the " << name_of_first_route << " that leaves at " << time_of_first_route
                   << " or the " << name_of_second_route << " that leaves at " << time_of_second_route << "." << std::endl;}
  // If only the first and third will leave at the desired time.
  else if ((difference_from_desired_time_to_first_route >= 0) && (difference_from_desired_time_to_second_route < 0) && (difference_from_desired_time_to_third_route >= 0))
        {std::cout << "You should probably take the " << name_of_first_route << " that leaves at " << time_of_first_route
                   << " or the " << name_of_third_route << " that leaves at " << time_of_third_route << "." << std::endl;}
  // If only the second and third will leave at the desired time.
  else if ((difference_from_desired_time_to_first_route < 0) && (difference_from_desired_time_to_second_route >= 0) && (difference_from_desired_time_to_third_route >= 0))
        {std::cout << "You should probably take the " << name_of_second_route << " that leaves at " << time_of_second_route
                   << " or the " << name_of_third_route << " that leaves at " << time_of_third_route << "." << std::endl;}
  // If none leave at the desired time.
  else if ((difference_from_desired_time_to_first_route < 0) && (difference_from_desired_time_to_second_route < 0) && (difference_from_desired_time_to_third_route < 0))
        {std::cout << "None of these buses will work. They all leave before the time you specified." << std::endl;}
  // If only first leaves at desired time or later.
  else if ((difference_from_desired_time_to_first_route >= 0) && (difference_from_desired_time_to_second_route < 0) && (difference_from_desired_time_to_third_route < 0))
      {std::cout << "You should probably take the " << name_of_first_route << " that leaves at " << time_of_first_route << "." << std::endl;}
  // If only second leaves at desired time or later.
  else if ((difference_from_desired_time_to_first_route < 0) && (difference_from_desired_time_to_second_route >= 0) && (difference_from_desired_time_to_third_route < 0))
      {std::cout << "You should probably take the " << name_of_second_route << " that leaves at " << time_of_second_route << "." << std::endl;}
  // If only third leaves at desired time or later.
  else if ((difference_from_desired_time_to_first_route < 0) && (difference_from_desired_time_to_second_route < 0) && (difference_from_desired_time_to_third_route >= 0))
      {std::cout << "You should probably take the " << name_of_third_route << " that leaves at " << time_of_third_route << "." << std::endl;}

  return 0;
}
