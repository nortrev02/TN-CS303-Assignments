#include "EmployeeNonPro.h"
#include <string>

//EmployeePro Constructor
EmployeeNonPro::EmployeeNonPro(double rate = 0.0, double hours = 0.0, std::string name = "John Doe", int vacadays = 0, double healthcont = 0.0) {
	SetEmployeeNonPro(rate, hours, name, vacadays, healthcont);
}

// EmployeePro setter
void EmployeeNonPro::SetEmployeeNonPro(double rate, double hours, std::string name, int vacadays, double healthcont) {
}
// EmployeePro Member Functions:
double EmployeeNonPro::calcWage() {
	return h_rate * h_hours;
}
double EmployeeNonPro::calcVacaHours() {
	return h_hours / 20.0;
}
int EmployeeNonPro::calcHealthCont() {
	return 0;
}
