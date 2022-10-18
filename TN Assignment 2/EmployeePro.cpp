#include "EmployeePro.h"
#include <string>

//EmployeePro Constructor
EmployeePro::EmployeePro(double rate = 0.0, double hours = 0.0, std::string name = "John Doe", int vacadays = 0, double healthcont = 0.0) {
	SetEmployeePro(rate, hours, name, vacadays, healthcont);
}

// EmployeePro setter
void EmployeePro::SetEmployeePro(double rate, double hours, std::string name, int vacadays, double healthcont) {
}
// EmployeePro Member Functions:
double EmployeePro::CalcSalary(double rate) {
	return (rate * 40);
}