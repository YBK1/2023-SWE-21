#pragma once

#include <iostream>
#include "SearchRecruitUI.h"
#include "Recruit.h"
using namespace std;

class SearchRecruit {
private:
	SearchRecruitUI* mySearchRecruitUI;
	vector<Recruit> memberList;
public:
	SearchRecruit(); //������
	void showRecruit(); //����� ä�������� �����ش�. 
};