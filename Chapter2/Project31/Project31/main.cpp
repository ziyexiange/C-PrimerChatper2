// ʹ�������ʼ��vector����
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 }; // ��������ʼ������
// ʹ�������ʼ�� vector ����
// arr��Ԫ�أ�arr + sizeof(arr) / sizeof(arr[0])βԪ�ص���һλ��
	vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
	// ��ӡ vector �е�Ԫ��
	for (int num : vec) {
		cout << num << " ";
	}
	cout << endl;


	return 0;
}