#include "ApplyRecruitUI.h"
#include "ApplyRecruit.h"

ApplyRecruitUI::ApplyRecruitUI() {
}

void ApplyRecruitUI::startInterface() {
	cout << "4.1 ä�������˻� :" << "\n";
}

void ApplyRecruitUI::applyForRecruit(int busnum) {
	int businessNumber;

	cin >>  businessNumber;
	busnum = businessNumber;
	ApplyRecruit createApply(busnum);	//����ڹ�ȣ �Ѱ���� �ҵ�
	

	
}

void ApplyRecruitUI::searchRecruit(string comname) {
	string companyname;

	cin >> companyname;
	comname = companyname;
	ApplyRecruit ShowRecruit(comname);		//����ϱ����� ȸ���̸��� �Ѱ�����ҵ�

	
}