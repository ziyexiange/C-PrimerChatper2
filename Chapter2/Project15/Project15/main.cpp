// 向vector对象中添加元素
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v2;
	for (int i = 0; i != 100; ++i) {
		v2.push_back(i);
	}


	return 0;
}