// ����ͳ�ʼ��vector����
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n = 10;
	vector<int> v1;        // �ռ��ϣ�T��ʾ�������ͣ���int��double���Լ��������������
	vector<int> v2(v1);
	vector<int> v3 = v1;
	vector<int> v4(n, 10);  // n��val
	vector<int> V5(n);      // n���ظ�ִ����Ĭ�ϳ�ʼ���Ķ���
	vector<int> v6{ 1, 2, 3};
	vector<int> v7 = { 1, 2, 3 };
	return 0;
}