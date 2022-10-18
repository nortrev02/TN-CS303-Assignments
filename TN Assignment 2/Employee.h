#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

// Declaration of the Employee Class, with data points for salary, hours, name, vacation days, and healthcare insurance contributions.
class Employee {

	double h_rate;
	double h_hours;
	std::string h_name;
	int h_vacadays;
	double h_healthcont;

public:
	Employee(double rate, double hours, std::string name, int vacadays, double healthcont);
	Employee() = default;

	void SetEmployee(double rate, double hours, std::string name, int vacadays, double healthcont);

	double getRate();
	double getHours();
	std::string getName();
	int getVacaDays();
	double getHealthCont();
};

#endif