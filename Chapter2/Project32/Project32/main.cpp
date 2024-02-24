// 多维数组的初始化
#include<iostream>
using namespace std;
int main()
{
	int ia[3][4] = {
   {0,1,2,3},
   {4,5,6,7},
   {8,9,10,11},
	};

	int ia2[3][4] = { {0},{4},{8} }; // 初始化每行第一个元素
	int ia3[3][4] = { 0,1,2,3 };     // 显示初始化第一行，其它元素执行值初始化

	return 0;

}