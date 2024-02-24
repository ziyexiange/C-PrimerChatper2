// 计算vector内对象的索引
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	std::vector<int> numbers = { 10, 20, 30, 40, 50 };
	// 获取指定索引处的元素
	std::cout << "索引为 2 的元素是: " << numbers[2] << std::endl;
	// 使用 vector 的 size_type 进行迭代
	for (std::vector<int>::size_type i = 0; i < numbers.size(); ++i) {
		std::cout << "索引为 " << i << " 的元素是: " << numbers[i] << std::endl;
	}


	return 0;
}