#include<iostream>
#include<vector>
using namespace std;//���������ظ��ĳ��֣�
int depu2(vector<int>&num)
{
	if (num.size() <= 2) return num.size();
	int index = 2;
	for (int i = 2; i < num.size(); i++) {
		if (num[i] != num[index - 2])
			num[index++] = num[i];
	}
	return index;

}
