// c_str函数
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string myString = "Hello, world!";
	// 使用 c_str() 返回一个指向以空字符结尾的 C 风格字符串的指针
	const char* cStyleString = myString.c_str();
	cout << "Content of C-style string: " << cStyleString << endl;

	return 0;
}