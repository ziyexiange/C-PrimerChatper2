// 迭代器的类型
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>::iterator it;
	string::iterator it2;
	vector<int>::const_iterator it3;  // 只能读，不能写；
	string::const_iterator it4;       // 只能读，不能写；

	return 0;
}
