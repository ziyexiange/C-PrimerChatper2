// strcmpº¯Êý
#include<iostream>
using namespace std;
int main()
{
	char cha1[100] = "hello ";
	const char cha2[] = "world";
	if (strcmp(cha1, cha2) == 0)  // ×Ö·û´®±È½Ï
		cout << "cha1 == cha2";
	else if (strcmp(cha1, cha2) < 0)
		cout << "cha1 < cha2" << endl;
	else
		cout << "cha1 > cha2";
	cout << endl;

	return 0;
}