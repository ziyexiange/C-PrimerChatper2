// ��ʼ��string����
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;              // Ĭ�ϳ�ʼ�������ַ���
	string s2 = s1;         // s2��s1�ĸ���
	string s3 = "hiya";     // s3�Ǹ��ַ�������ֵ�ĸ�����
	string s4(10, 'c');     // s4��������cccccccccc;
	string s5("hiya");      // s5�Ǹ��ַ�������ֵ�ĸ���

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	return 0;
}