#include "Cal.h"


void Calculator::ShowOpCount() {
	cout << "+ : " << AddCount << ", - : " << MinCount << ", * : " << MulCount << ", / : " << DivCount << endl;
}

void Calculator::Init() {
	MinCount = 0;
	AddCount = 0;
	MulCount = 0;
	DivCount = 0;
}