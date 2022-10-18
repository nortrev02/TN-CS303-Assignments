#include "EmployeePro.h"
#include <string>

//EmployeePro Constructor
EmployeePro::EmployeePro(double rate, double hours, std::string name, int vacadays, double healthcont, bool fulltime = true) {
	SetEmployeePro(rate, hours, name, vacadays, healthcont, fulltime);
}

// EmployeePro setter
void EmployeePro::SetEmployeePro(double rate, double hours, std::string name, int vacadays, double healthcont, bool fulltime) {
	h_fulltime = fulltime;
}
// EmployeePro Setters
void EmployeePro::setFullTime(bool ful) {
	h_fulltime = ful;
}
// EmployeePro Member Functions: