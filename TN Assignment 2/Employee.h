#ifindef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {

private:
	int h_salary;
	int h_hours;
	string h_name;

public:
	Employee(int salary, int hours, string name);

	void SetEmployee(int salary, int hours, string name);

	int getSalary() { return h_salary };
	int getHours() { return h_hours };
	string getName() { return h_name };
};

#endif