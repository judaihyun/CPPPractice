#include <iostream>
using namespace std;

class Computer {
private:
	char owner[50];
public:
	Computer(char *name) {
		int len = (int)strlen(name) + 1;
		strcpy_s(owner, len, name);
	}
	void Calculate() {
		cout << "Caculating ..." << endl;
	}
};

class NotebookComp : public Computer {
private:
	int Battery;
public:
	NotebookComp(char *name, int initChag) : Computer(name), Battery(initChag) {}
	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	void MovingCal() {
		if (GetBatteryInfo() < 1) {
			cout << "It should be charge" << endl;
			return;
		}
		cout << "while moving ";
		Calculate();
		UseBattery();
	}
	int GetBatteryInfo() { return Battery; }
};

class TabletNotebook : public NotebookComp {
private:
	char regstPenModel[50];
public:
	TabletNotebook(char *name, int initChag, char *pen) : NotebookComp(name, initChag) {
		int len = (int)strlen(pen) + 1;
		strcpy_s(regstPenModel, len, pen);
	}
	void Write(char * penInfo) {
		if (GetBatteryInfo() < 1) {
			cout << "It should be charge" << endl;
			return;
		}
		if (strcmp(regstPenModel, penInfo) != 0) {
			cout << "Not registed Pen" << endl;
			return;
		}
		cout << "Processing the written contents" << endl;
		UseBattery();
	}
};

int main() {

	NotebookComp nc("jdh", 5);
	TabletNotebook tn("kkkk", 5, "ISE-242-242");
	nc.MovingCal();
	tn.Write("ISE-242-242");


	return 0;
}