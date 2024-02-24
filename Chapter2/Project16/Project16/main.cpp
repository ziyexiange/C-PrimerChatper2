// 关系运算符按照字典顺序进行比较
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	std::vector<int> vec1 = { 1, 2, 3 };
	std::vector<int> vec2 = { 1, 2, 4 };
	// 比较大小
	if (vec1 < vec2) {
		std::cout << "vec1 小于 vec2" << std::endl;
	}
	else if (vec1 > vec2) {
		std::cout << "vec1 大于 vec2" << std::endl;
	}
	else {
		std::cout << "vec1 等于 vec2" << std::endl;
	}


	return 0;
}