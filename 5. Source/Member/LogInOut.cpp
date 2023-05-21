#include "LogInOut.h"
#include "LogInOutUI.h"

LogInOut::LogInOut(string &thisSession, LogInOutUI* myui, vector<Member> &myMemberList) : memberList(myMemberList), ui(myui), session(thisSession) {
	ui->setControl(this);

	int logType = 0;
	ui->getLogType(logType);
	ui->startInterface(logType, session);
}

void LogInOut::runLogIn(string userId, string password) {	//  ���ϰ� ������
	for (int i = 0; i < memberList.size(); i++) {
		string tempId = memberList[i].getId();
		string tempPw = memberList[i].getPassword();

		if (!userId.compare(tempId) && !password.compare(tempPw)) {
			session = tempId;
		}
	}
}

void LogInOut::runLogOut() {
	session = "";
}