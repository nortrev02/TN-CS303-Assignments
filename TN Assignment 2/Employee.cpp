#include "Employee.h"
#include <string>

// Employee Constructor
Employee::Employee(double rate, double hours, std::string name) {

	SetEmployee(rate, hours, name);
};

// Employee member function
void Employee::SetEmployee(double rate, double hours, std::string name) {

	h_rate = rate;
	h_hours = hours;
	h_name = name;
};