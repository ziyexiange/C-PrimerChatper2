// ����vector�ڶ��������
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	std::vector<int> numbers = { 10, 20, 30, 40, 50 };
	// ��ȡָ����������Ԫ��
	std::cout << "����Ϊ 2 ��Ԫ����: " << numbers[2] << std::endl;
	// ʹ�� vector �� size_type ���е���
	for (std::vector<int>::size_type i = 0; i < numbers.size(); ++i) {
		std::cout << "����Ϊ " << i << " ��Ԫ����: " << numbers[i] << std::endl;
	}


	return 0;
}