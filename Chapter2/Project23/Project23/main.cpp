// ָ�������
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string num[] = { "one","two" };
	string *p = &num[0];  // pָ��num�ĵ�һ��Ԫ��
	string *p2 = num;     // �ȼ���p2 = &num[0];

	return 0;
}