// strcat������strcpy����
#include<iostream>
using namespace std;
int main()
{
	char cha1[100] = "hello ";
	const char cha2[] = "world";
	strcat_s(cha1, cha2);      // ����
	cout << cha1 << endl;
	strcpy_s(cha1, cha2);      // ����
	cout << cha1 << endl;

	return 0;

}