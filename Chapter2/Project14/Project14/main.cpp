// �б��ʼֵ����Ԫ������
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v1(10);      // v1��10��Ԫ�أ�ÿ��ֵ����0
	vector<int>v2{ 10 };    // v2��1��Ԫ�أ�ֵ��10
	vector<int>v3(10,1);    // v3��10��Ԫ�أ�ÿ��ֵ����1
	vector<int>v4{ 10,1 };  // v1��2��Ԫ�أ�ֵ��10, 1

	return 0;
}