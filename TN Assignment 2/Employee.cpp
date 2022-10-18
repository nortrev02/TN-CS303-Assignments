#include "Employee.h"
#include <string>

// Employee Constructor
Employee::Employee(double rate = 0.0, double hours = 0.0, std::string name = "John Doe", int vacadays = 0, double healthcont = 0.0) {

	SetEmployee(rate, hours, name, vacadays, healthcont);
};

// Employee Setter
void Employee::SetEmployee(double rate, double hours, std::string name, int vacadays, double healthcont) {

	h_rate = rate;
	h_hours = hours;
	h_name = name;
	h_vacadays = vacadays;
	h_healthcont = healthcont;
};
// Employee Getters
double Employee::getRate() {
	return h_rate;
}
double Employee::getHours() {
	return h_hours;
}
std::string Employee::getName() {
	return h_name;
}
int Employee::getVacaDays() {
	return h_vacadays;
}
double Employee::getHealthCont() {
	return h_healthcont;
}