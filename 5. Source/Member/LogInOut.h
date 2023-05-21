#pragma once
#include <vector>
#include "Member.h"

class LogInOutUI;

class LogInOut {
private:
	string session = "";
	LogInOutUI* ui;
	vector<Member> memberList;
public:
	LogInOut(string &thisSession, LogInOutUI *myui, vector<Member> &myMemberList);
	void runLogIn(string userId, string password);	// ���ϰ� ���� ����
	void runLogOut();
};