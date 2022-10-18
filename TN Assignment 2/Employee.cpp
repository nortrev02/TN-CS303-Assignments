#include "Employee.h"
#include <string>

// Employee Constructor
 Employee::Employee(double rate = 0.0, double hours = 0.0, std::string name = "John Doe", int vacadays = 0, double healthcont = 0.0) {

	SetEmployee(rate, hours, name, vacadays, healthcont);
};

// Employee Setter
int Employee::SetEmployee(double rate, double hours, std::string name, int vacadays, double healthcont) {

	h_rate = rate;
	h_hours = hours;
	h_name = name;
	h_vacadays = vacadays;
	h_healthcont = healthcont;
	return 0;
};
// Employee Setters
void Employee::setRate(double rat) {
	h_rate = rat;
}
void Employee::setHours(double hou) {
	h_hours = hou;
}
void Employee::setName(std::string nam) {
	h_name = nam;
}
void Employee::setVacaDays(int vac) {
	h_vacadays = vac;
}
void Employee::setHealthCont(double hea) {
	h_healthcont = hea;
}
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