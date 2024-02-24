// 使用数组初始化vector对象
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 }; // 声明并初始化数组
// 使用数组初始化 vector 对象
// arr首元素，arr + sizeof(arr) / sizeof(arr[0])尾元素的下一位置
	vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
	// 打印 vector 中的元素
	for (int num : vec) {
		cout << num << " ";
	}
	cout << endl;


	return 0;
}