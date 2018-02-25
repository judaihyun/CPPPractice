#include <iostream>
using namespace std;

class Employee {
private:
	char name[100];
public:
	Employee(char *name) {
		strcpy_s(this->name, (int)strlen(name) + 1, name);
	}
	void ShowYourName() const {
		cout << "name : " << name << endl;
	}
	virtual int GetPay() const = 0;  // It should be call abstract class or pure virtual class
	// virtual int GetPay() const{ return 0; }  // virtual class
	virtual void ShowSalaryInfo() const = 0;
};

class PermanentWorker : public Employee {
private:
	int salary;
public:
	PermanentWorker(char* name, int money) : Employee(name), salary(money) {}
	int GetPay() const {
		return salary;
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker {
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(char *name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}
	void AddSalesResult(int value) {
		salesResult += value;
	}
	int GetPay() const {
		return PermanentWorker::GetPay() + (int)(salesResult*bonusRatio);
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee {
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(char *name, int pay) : Employee(name), workTime(0), payPerHour(pay) {}
	void AddWorkTime(int time) {
		workTime += time;
	}
	int GetPay() const {
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler {
private:
	Employee * empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0) {}
	void AddEmployee(Employee* emp) {
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const {
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();

	}
	void ShowTotalSalary() const {
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler() {
		for (int i = 0; i<empNum; i++)
			delete empList[i];
	}
};

int main() {
	EmployeeHandler handler;

	//add PermanentEmployees
	handler.AddEmployee(new PermanentWorker("JU", 1000));
	handler.AddEmployee(new PermanentWorker("lee", 2000));

	//add TempEmployees
	TemporaryWorker * part = new TemporaryWorker("jung", 700);
	part->AddWorkTime(5);
	handler.AddEmployee(part);

	handler.ShowAllSalaryInfo();

	handler.ShowTotalSalary();



	return 0;
}