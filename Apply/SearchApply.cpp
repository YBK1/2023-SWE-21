#include <iostream>
#include "SearchApply.h"
#include "Recruit.h"

using namespace std;


void SearchApply::showApply() {
	//���� ���� ��ȸ ���
	for (int i = 0; i < getApplyList.size(); i++) {		//���� ���� ����Ʈ ���
		cout << getApplyList[i];
	}
}