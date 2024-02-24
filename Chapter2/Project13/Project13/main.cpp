// 定义和初始化vector对象
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n = 10;
	vector<int> v1;        // 空集合，T表示数据类型，如int、double或自己定义的数据类型
	vector<int> v2(v1);
	vector<int> v3 = v1;
	vector<int> v4(n, 10);  // n个val
	vector<int> V5(n);      // n个重复执行了默认初始化的对象
	vector<int> v6{ 1, 2, 3};
	vector<int> v7 = { 1, 2, 3 };
	return 0;
}