// 初始化string对象
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;              // 默认初始化，空字符串
	string s2 = s1;         // s2是s1的副本
	string s3 = "hiya";     // s3是该字符串字面值的副本；
	string s4(10, 'c');     // s4的内容是cccccccccc;
	string s5("hiya");      // s5是该字符串字面值的副本

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	return 0;
}