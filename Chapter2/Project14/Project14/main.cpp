// 列表初始值还是元素数量
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v1(10);      // v1有10个元素，每个值都是0
	vector<int>v2{ 10 };    // v2有1个元素，值是10
	vector<int>v3(10,1);    // v3有10个元素，每个值都是1
	vector<int>v4{ 10,1 };  // v1有2个元素，值是10, 1

	return 0;
}