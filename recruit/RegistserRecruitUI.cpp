#include "RegisterRecruitUI.h"

RegisterRecruitUI::RegisterRecruitUI() {
}

void RegisterRecruitUI::startInterface() {
	cout << "3.1. ä������ ��� :" << "\n";
}

void RegisterRecruitUI::enterDetails(string& type, int& count, string& time) {
	string taskType; int headCount; string deadLine;

	cin >> taskType >> headCount >> deadLine;
	cout << taskType << " " << headCount << " " << deadLine;

	type = taskType; count = headCount; time = deadLine;
}