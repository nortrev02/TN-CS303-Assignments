#ifindef EMPLOYEE_H
#define EMPLOYEE_H
// Definition of the Employee Class, with data points for salary, hours, and name.
class Employee {

private:
	double h_rate;
	double h_hours;
	string h_name;

public:
	Employee(double rate, double hours, string name);

	void SetEmployee(double rate, double hours, string name);

	double getRate() { return h_rate};
	double getHours() { return h_hours };
	string getName() { return h_name };
};

#endif