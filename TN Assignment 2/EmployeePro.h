#ifndef EMPLOYEEPRO_H
#define EMPLOYEEPRO_H
#include "Employee.h"
#include <string>

class EmployeePro : public Employee {

public:
	EmployeePro(double rate, double hours, std::string name, int VacaDays, double healthcont);

	void SetEmployeePro(double rate, double hours, std::string name, int VacaDays, double healthcont);

	double calcSalary();

	double calcVacaDays();

	double calcHealthCont();
};
#endif