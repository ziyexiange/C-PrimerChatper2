// 处理一部分字符
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str2 = "some strings";
	if (!str2.empty())
		str2[0] = toupper(str2[0]);
	cout << str2 << endl;     // Some strings
	for (auto index = 0; index != str2.size() && !isspace(str2[index]); ++index)
		str2[index] = toupper(str2[index]);
	cout << str2 << endl;    // SOME strings

	return 0;
}