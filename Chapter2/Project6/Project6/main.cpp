// string的成员函数
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str = "Hello, world!";
	// 使用 empty 函数检查字符串是否为空
	if (str.empty()) {
		cout << "String is empty." << endl;
	}
	else {
		cout << "String is not empty." << endl;
	}
	string::size_type len = str.size();
	cout << "Length of the string: " << len << endl;
	return 0;
}

