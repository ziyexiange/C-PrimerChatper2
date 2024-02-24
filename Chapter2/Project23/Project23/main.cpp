// 指针和数组
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string num[] = { "one","two" };
	string *p = &num[0];  // p指向num的第一个元素
	string *p2 = num;     // 等价于p2 = &num[0];

	return 0;
}