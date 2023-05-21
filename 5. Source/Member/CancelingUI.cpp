#include "Canceling.h"
#include "CancelingUI.h"

CancelingUI::CancelingUI() {};

void CancelingUI::setControl(Canceling* myControl) {
	control = myControl;
}

void CancelingUI::startInterface(string session) {
	cout << "1.2 ȸ��Ż��" << "\n";
	enterCancel(session);
	control->cancel();
}

void CancelingUI::enterCancel(string session) {
	cout << "> " << session;
}