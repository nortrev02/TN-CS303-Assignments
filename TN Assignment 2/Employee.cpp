#include "Employee.h"

Employee::Employee(int salary, int hours, string name) {

	SetEmployee(salary, hours, name)
}

void Employee::SetEmployee(int salary, int hours, string name) {
	
	h_salary = salary;
	h_hours = hours;
	h_name = name;
}