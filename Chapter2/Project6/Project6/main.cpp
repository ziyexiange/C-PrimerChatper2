// string�ĳ�Ա����
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str = "Hello, world!";
	// ʹ�� empty ��������ַ����Ƿ�Ϊ��
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

