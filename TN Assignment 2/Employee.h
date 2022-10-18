#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

// Definition of the Employee Class, with data points for salary, hours, and name.
class Employee {

private:
	double h_rate;
	double h_hours;
	std::string h_name;

public:
	Employee(double rate, double hours, std::string name);

	void SetEmployee(double rate, double hours, std::string name);

	double getRate() { return h_rate; }
	double getHours() { return h_hours; }
	std::string getName() { return h_name; }
};

#endif