// ����string�����C����ַ���
#include<iostream>
#include<string>
using namespace std;
int main()
{
	std::string str = "Hello, ";
	const char* cStr = "world!";
	std::string result = str + cStr; // ʹ�üӷ���������� string �� C ����ַ���
	std::cout << "Result: " << result << std::endl;

	return 0;
}