// ��ϵ����������ֵ�˳����бȽ�
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	std::vector<int> vec1 = { 1, 2, 3 };
	std::vector<int> vec2 = { 1, 2, 4 };
	// �Ƚϴ�С
	if (vec1 < vec2) {
		std::cout << "vec1 С�� vec2" << std::endl;
	}
	else if (vec1 > vec2) {
		std::cout << "vec1 ���� vec2" << std::endl;
	}
	else {
		std::cout << "vec1 ���� vec2" << std::endl;
	}


	return 0;
}