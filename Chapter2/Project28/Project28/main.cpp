// strcat函数和strcpy函数
#include<iostream>
using namespace std;
int main()
{
	char cha1[100] = "hello ";
	const char cha2[] = "world";
	strcat_s(cha1, cha2);      // 连接
	cout << cha1 << endl;
	strcpy_s(cha1, cha2);      // 拷贝
	cout << cha1 << endl;

	return 0;

}