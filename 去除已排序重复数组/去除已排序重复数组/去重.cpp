/*���Ѿ����������ȥ�� ���ҷ���ȥ�غ��Ԫ�صĸ���
˼·����һ��index���ж��ǲ��Ǻ���һ��Ԫ����ȣ�Ҫ�������ô�������� index��ֵ�����ı�
Ҫ�ǲ���ȣ���ôindex��ֵ��ǰ�ƶ�һ��λ�� 
*/
#include<iostream>
#include<vector>
using namespace std;
int depu(vector<int>&num)
{	
	int index = 0;
	for (int i = 1; i < num.size(); i++)
	{
		if (num[index] != num[i])
		{
			num[++index] = num[i];
		}
	}
	
	
	return index+1;
}
void main()
{
	vector<int >number= {1, 1, 2, 3, 55, 55, 67, 67, 67, 89, 100};
	int index=depu(number);
	for (int i = 0; i < index; i++)
	{
		cout << number[i] << " ";
	}
	cout << endl;
	system("pause");
}