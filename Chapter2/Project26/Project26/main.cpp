// �±��ָ��
#include<iostream>
using namespace std;
int main()
{
	int ia[] = { 0,1,2,3,4,6 };
	int *p = &ia[2];   // ָ��pָ������ia�ĵ�����Ԫ��
	int j = p[1];      // p[1]ָ���������еĵ��ĸ�Ԫ��
	int k = p[-2];     // p[-2]ָ���������еĵ�һ��Ԫ��

	return 0;
}

