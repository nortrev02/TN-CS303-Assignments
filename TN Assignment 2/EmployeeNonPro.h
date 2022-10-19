#ifndef EMPLOYEENONPRO_H
#define EMPLOYEENONPRO_H
#include "Employee.h"
#include <string>

class EmployeeNonPro : public Employee {

public:
	EmployeeNonPro(double rate, double hours, std::string name, int VacaDays, double healthcont);

	void SetEmployeeNonPro(double rate, double hours, std::string name, int VacaDays, double healthcont);

	double calcWage();

	double calcVacaHours();

	int calcHealthCont();
};
#endif