// 比较string对象
#include<iostream>
#include<string>
using namespace std;
int main()
{
	std::string str1 = "apple";
	std::string str2 = "banana";
	if (str1 == str2) {
		std::cout << "str1 and str2 are equal" << std::endl;
	}
	else if (str1 < str2) {
		std::cout << "str1 is less than str2" << std::endl;
	}
	else {
		std::cout << "str1 is greater than str2" << std::endl;
	}
	return 0;
}