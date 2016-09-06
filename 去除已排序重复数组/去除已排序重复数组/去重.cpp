/*将已经排序的数组去重 并且返回去重后的元素的个数
思路：用一个index来判断是不是和下一个元素相等，要是相等那么不做操作 index的值并不改变
要是不相等，那么index的值向前移动一个位置 
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