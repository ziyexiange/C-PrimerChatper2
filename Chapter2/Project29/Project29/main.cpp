// 混用string对象和C风格字符串
#include<iostream>
#include<string>
using namespace std;
int main()
{
	std::string str = "Hello, ";
	const char* cStr = "world!";
	std::string result = str + cStr; // 使用加法运算符连接 string 和 C 风格字符串
	std::cout << "Result: " << result << std::endl;

	return 0;
}