// 定义和初始化内置数组
#include<iostream>
#include<string>
using namespace std;
int main()
{
	unsigned cnt = 42;              // 不是常量表达式
	constexpr unsigned sz = 42;     // 常量表达式
	int arr[10];                    // 10个元素,数组的元素被默认初始化
	int *parr[sz];                  // 数组维度必须为常量

}
