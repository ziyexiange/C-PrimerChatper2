// 指针功能
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int ia[] = { 0,1,2,3,4,8 };
	int last = *(ia + 4);  // 指向数组的第五个元素
	int last2 = *ia + 5;   // 表示数组第一个元素的值加上5


	return 0;
}