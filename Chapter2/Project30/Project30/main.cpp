// c_str����
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string myString = "Hello, world!";
	// ʹ�� c_str() ����һ��ָ���Կ��ַ���β�� C ����ַ�����ָ��
	const char* cStyleString = myString.c_str();
	cout << "Content of C-style string: " << cStyleString << endl;

	return 0;
}