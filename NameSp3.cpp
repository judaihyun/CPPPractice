#include "myfunc.h"

namespace BestComImpl
{
	void SimpleFunc();
	void PrettyFunc();
}
namespace ProgComImpl
{
	void SimpleFunc();
}

int main() {
	BestComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc() {
	cout << "BestCom�� ������ �Լ�" << endl;
	PrettyFunc();
	ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc() {
	cout << "So Pretty !" << endl;
}

void ProgComImpl::SimpleFunc() {
	cout << "ProgCom�� ������ �Լ�" << endl;
}
