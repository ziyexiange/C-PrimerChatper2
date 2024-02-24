// 处理每个字符？使用基于范围的for语句
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str("some string");
	for (auto c : str)
		cout << c << endl;
	return 0;
}

