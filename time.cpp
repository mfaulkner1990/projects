#include "time.hpp"
#include <iomanip>
#include <iostream>
#include <string>

std::string mil_to_reg(int mil_time) {

  std::string meridiem = "am";
  int hours = mil_time / 100;
  int minutes = mil_time % 100;
  const int subtract_for_pm_hours = 1200;
  const int meridiem_qualifier = 1159;
  std::string = converted_time;


  // If
  if (hours > 12) {
    hours = hours - 12;
  }

  if (mil_time > meridiem_qualifier) {
    meridiem = "pm";
  }

  return std::cout << hours + ":" << std::setw(2) << std::setfill('0') << minutes
            << " " << meridiem;

}
