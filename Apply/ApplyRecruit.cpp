#include <iostream>
#include "ApplyRecruit.h"

using namespace std;

void ApplyRecruit :: createApply(int& bnum) {
	//������ ȸ������ ���
	for (int i = 0; i < CompanyList.size(); i++) {		//�ּ�ó���� �κ�
		if (bnum == getRecruitList[i].getid) {
			return getRecruitList[i];
		}
	}
}

void ApplyRecruit :: showRecruit(string& cname) {
	//�������� ��ȸ
	for (int i = 0; i < getApplyList.size(); i++) {
		if (cname == getApplyList[i].cname) {
			return getApplyList[i];
		}
	}
}
