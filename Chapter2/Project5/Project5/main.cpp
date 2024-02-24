// 使用getline读取一整行
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string line;
	while (getline(cin, line))
		cout << line << endl;
}

