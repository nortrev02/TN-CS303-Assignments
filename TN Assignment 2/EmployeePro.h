#ifndef EMPLOYEEPRO_H
#define EMPLOYEEPRO_H
#include "Employee.h"
#include <string>

class EmployeePro : public Employee {

	bool h_fulltime;

public:
	EmployeePro(double rate, double hours, std::string name, int VacaDays, double healthcont, bool fulltime);
	EmployeePro() = default;

	void SetEmployeePro(double rate, double hours, std::string name, int VacaDays, double healthcont, bool fulltime);

	void setFullTime(bool ful);
};
#endif