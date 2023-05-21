#include <iostream>
#include "RegisterRecruit.h"

using namespace std;

RegisterRecruit::RegisterRecruit() {
	myRegisterRecruitUI = new RegisterRecruitUI();
	myRegisterRecruitUI->startInterface();

	string taskType; int headCount; string deadLine;
	
	myRegisterRecruitUI->enterDetails(taskType, headCount, deadLine);
	createRecruit(taskType, headCount, deadLine);
}


void RegisterRecruit::createRecruit(string& taskType, int& headCount, string& deadLine) {
	// companyMember���� ȸ���̸��� ����ڹ�ȣ�� �Ѱܿ;��ϴµ� �� �κ��� ���� ���� ���ϰ���
	// Ư�� ����ڹ�ȣ �κ��� private�̿��� get �Լ��� �������ҵ�?
	// �߸� ������ �κ��� �ִ°���... 
	// �׷��ٰ� �����ڸ� �ٸ� �� �����ֵ� �̻��� ����...?
	// Member myMember = CompanyMember(id, password, name, number);
	// Recruit myRecruit = Recruit(myMember., taskType, headCount, deadLine);
}