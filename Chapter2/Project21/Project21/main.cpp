// 显式初始化数组元素
#include<iostream>
#include<string>
using namespace std;
int main()
{
	const unsigned sz = 3;
	int ial[sz] = { 0,1,2 };   // 含有3个元素的数组
	int a2[] = { 0,1,2 };
	int a3[5] = { 0,1,2 };     // 等价于a3[5] = {0,1,2,0,0};

	return 0;
}
